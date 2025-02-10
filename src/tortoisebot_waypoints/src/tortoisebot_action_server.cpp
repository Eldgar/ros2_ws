#include <chrono>
#include <cmath>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Matrix3x3.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tortoisebot_waypoints/action/waypoint.hpp"

using namespace std::chrono_literals;

class TortoisebotActionServer : public rclcpp::Node {
public:
  using Waypoint = tortoisebot_waypoints::action::Waypoint;
  using GoalHandleWaypoint = rclcpp_action::ServerGoalHandle<Waypoint>;

  TortoisebotActionServer() : Node("tortoisebot_action_server") {
    // Declare parameters
    yaw_precision_ = M_PI / 210.0; // ~2 degrees
    dist_precision_ = 0.05;        // 5 cm

    // Create publisher/subscriber
    cmd_vel_pub_ =
        this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
        "/odom", 10,
        std::bind(&TortoisebotActionServer::odomCallback, this,
                  std::placeholders::_1));

    // Create the action server
    using namespace std::placeholders;
    action_server_ = rclcpp_action::create_server<Waypoint>(
        this, "tortoisebot_as",
        std::bind(&TortoisebotActionServer::handleGoal, this, _1, _2),
        std::bind(&TortoisebotActionServer::handleCancel, this, _1),
        std::bind(&TortoisebotActionServer::handleAccepted, this, _1));

    RCLCPP_INFO(this->get_logger(), "Tortoisebot action server started.");
  }

private:
  rclcpp_action::Server<Waypoint>::SharedPtr action_server_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;

  // Robot states
  double yaw_{0.0};
  geometry_msgs::msg::Point position_;
  std::string state_{"idle"};

  // Goal
  geometry_msgs::msg::Point des_pos_;

  // Control parameters
  double yaw_precision_;
  double dist_precision_;

  // Callback for /odom
  void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg) {
    position_ = msg->pose.pose.position;

    // Convert quaternion to yaw
    double roll, pitch, yaw;
    tf2::Quaternion q(
        msg->pose.pose.orientation.x, msg->pose.pose.orientation.y,
        msg->pose.pose.orientation.z, msg->pose.pose.orientation.w);
    tf2::Matrix3x3 m(q);
    m.getRPY(roll, pitch, yaw);
    yaw_ = yaw;
  }

  // 1) handleGoal
  rclcpp_action::GoalResponse
  handleGoal(const rclcpp_action::GoalUUID &uuid,
             std::shared_ptr<const Waypoint::Goal> goal) {
    RCLCPP_INFO(this->get_logger(), "Received goal request [x=%.2f, y=%.2f]",
                goal->position.x, goal->position.y);
    (void)uuid;
    // Accept all goals
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  // 2) handleCancel
  rclcpp_action::CancelResponse
  handleCancel(const std::shared_ptr<GoalHandleWaypoint> goal_handle) {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  // 3) handleAccepted
  void handleAccepted(const std::shared_ptr<GoalHandleWaypoint> goal_handle) {
    // This executes in a separate thread
    std::thread{std::bind(&TortoisebotActionServer::execute, this,
                          std::placeholders::_1),
                goal_handle}
        .detach();
  }

  void execute(const std::shared_ptr<GoalHandleWaypoint> goal_handle) {
    RCLCPP_INFO(this->get_logger(), "Executing goal...");

    rclcpp::Rate loop_rate(5);

    // Feedback & result
    auto feedback_msg = std::make_shared<Waypoint::Feedback>();
    auto result_msg = std::make_shared<Waypoint::Result>();

    // Goal position
    auto goal = goal_handle->get_goal();
    des_pos_ = goal->position;

    bool success = true;
    double prev_err_yaw = 0.0;
    double prev_err_pos = 0.0;
    double Kp_yaw = 4.5, Kd_yaw = 0.3;
    double Kp_pos = 2.0, Kd_pos = 0.2;

    while (rclcpp::ok()) {
      if (goal_handle->is_canceling()) {
        RCLCPP_WARN(this->get_logger(), "Goal canceled.");
        result_msg->success = false;
        goal_handle->canceled(result_msg);
        return;
      }

      // Compute error
      double desired_yaw =
          std::atan2(des_pos_.y - position_.y, des_pos_.x - position_.x);
      double err_yaw = desired_yaw - yaw_;
      double err_pos =
          std::hypot(des_pos_.y - position_.y, des_pos_.x - position_.x);

      // PD control: Angular speed
      double d_err_yaw = err_yaw - prev_err_yaw;
      double angular_speed = (Kp_yaw * err_yaw) + (Kd_yaw * d_err_yaw);
      angular_speed = std::max(0.1, std::min(1.2, std::fabs(angular_speed))) *
                      (angular_speed > 0 ? 1 : -1);

      // PD control: Linear speed
      double d_err_pos = err_pos - prev_err_pos;
      double linear_speed = (Kp_pos * err_pos) + (Kd_pos * d_err_pos);
      linear_speed = std::max(0.08, std::min(1.0, std::fabs(linear_speed)));

      if (err_pos < dist_precision_) {
        // Goal reached
        RCLCPP_INFO(this->get_logger(), "Reached goal!");
        break;
      } else if (std::fabs(err_yaw) > yaw_precision_) {
        // Fix yaw
        state_ = "fix yaw";
        geometry_msgs::msg::Twist twist;
        twist.angular.z = angular_speed;
        twist.linear.x = 0.0;
        cmd_vel_pub_->publish(twist);
      } else {
        // Move forward
        state_ = "go to point";
        geometry_msgs::msg::Twist twist;
        twist.linear.x = linear_speed;
        twist.angular.z = 0.0;
        cmd_vel_pub_->publish(twist);
      }

      // Publish feedback
      feedback_msg->position = position_;
      feedback_msg->state = state_;
      goal_handle->publish_feedback(feedback_msg);

      prev_err_yaw = err_yaw;
      prev_err_pos = err_pos;

      loop_rate.sleep();
    }

    // Stop
    cmd_vel_pub_->publish(geometry_msgs::msg::Twist());

    // Return success
    if (success) {
      result_msg->success = true;
      goal_handle->succeed(result_msg);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded!");
    }
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TortoisebotActionServer>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
