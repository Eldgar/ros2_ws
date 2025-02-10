#include <chrono>
#include <cmath>
#include <geometry_msgs/msg/point.hpp>
#include <gtest/gtest.h>
#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <thread>
#include <tortoisebot_waypoints/action/waypoint.hpp>

using namespace std::chrono_literals;
using WaypointAction = tortoisebot_waypoints::action::Waypoint;
using GoalHandleWaypoint = rclcpp_action::ClientGoalHandle<WaypointAction>;

// Set the target coordinates (adjust as needed)
const double TARGET_X = 1.25;
const double TARGET_Y = 1.25;

class TestTortoiseBotWaypoints : public ::testing::Test {
protected:
  // The ROS 2 node, action client, and odometry subscription.
  rclcpp::Node::SharedPtr node;
  rclcpp_action::Client<WaypointAction>::SharedPtr action_client;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub;

  // Variables updated by the odometry callback.
  geometry_msgs::msg::Point current_position;
  double current_yaw = 0.0;

  // Flag set by the result callback.
  bool goal_result_received = false;

  // Single-threaded executor for spinning the node.
  rclcpp::executors::SingleThreadedExecutor executor;
  std::shared_future<std::shared_ptr<GoalHandleWaypoint>> goal_future;

  // Callback to update the current position and yaw from odometry.
  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
    current_position = msg->pose.pose.position;
    tf2::Quaternion quat(
        msg->pose.pose.orientation.x, msg->pose.pose.orientation.y,
        msg->pose.pose.orientation.z, msg->pose.pose.orientation.w);
    tf2::Matrix3x3 mat(quat);
    double roll, pitch;
    mat.getRPY(roll, pitch, current_yaw);
    // RCLCPP_INFO(node->get_logger(), "Odom Callback: position(%.2f, %.2f),
    // yaw: %.2f",
    //             current_position.x, current_position.y, current_yaw);
  }

  // Send the goal to the action server.
  void send_goal() {
    auto goal_msg = WaypointAction::Goal();
    goal_msg.position.x = TARGET_X;
    goal_msg.position.y = TARGET_Y;

    rclcpp_action::Client<WaypointAction>::SendGoalOptions options;
    options.result_callback =
        [this](const GoalHandleWaypoint::WrappedResult &result) {
          if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
            goal_result_received = true;
            RCLCPP_INFO(node->get_logger(), "Goal succeeded!");
          }
        };

    goal_future = action_client->async_send_goal(goal_msg, options);

    // Spin until we receive the goal result.
    while (!goal_result_received && rclcpp::ok()) {
      executor.spin_node_some(node);
    }

    // Spin a little extra to ensure the final odometry update is processed.
    std::this_thread::sleep_for(500ms);
    executor.spin_node_some(node);
  }

  void SetUp() override {
    // Create a node for testing.
    node = std::make_shared<rclcpp::Node>("test_tortoisebot_waypoints");

    // Create the action client (we assume the action server is running
    // externally).
    action_client =
        rclcpp_action::create_client<WaypointAction>(node, "/tortoisebot_as");

    // Wait for the action server with a short timeout (1 second).
    // If the action server isn’t available, exit immediately with code 1.
    if (!action_client->wait_for_action_server(1s)) {
      std::exit(1);
    }

    // Subscribe to the odometry topic.
    odom_sub = node->create_subscription<nav_msgs::msg::Odometry>(
        "/odom", 10,
        std::bind(&TestTortoiseBotWaypoints::odom_callback, this,
                  std::placeholders::_1));

    // Send the goal and wait for it to be reached.
    send_goal();
  }
};

// Test that the final position is close to the target.
TEST_F(TestTortoiseBotWaypoints, test_final_position) {
  double x_err = std::abs(current_position.x - TARGET_X);
  double y_err = std::abs(current_position.y - TARGET_Y);

  if (x_err >= 0.1 || y_err >= 0.1) {
    std::cerr
        << "Robot did not reach the expected position. Exiting immediately.\n";
    std::exit(1);
  }

  // If we reached here, robot is within acceptable range.
  EXPECT_LT(x_err, 0.1) << "Robot did not reach the expected x position!";
  EXPECT_LT(y_err, 0.1) << "Robot did not reach the expected y position!";
}

// Test that the final yaw is as expected (calculated from TARGET_Y and
// TARGET_X).
TEST_F(TestTortoiseBotWaypoints, test_final_yaw) {
  double expected_yaw = std::atan2(TARGET_Y, TARGET_X);
  double yaw_err = std::abs(current_yaw - expected_yaw);
  EXPECT_LT(yaw_err, 0.26) << "Robot's final yaw angle is incorrect!";
}

int main(int argc, char **argv) {
  // Initialize ROS 2.
  rclcpp::init(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  int result = RUN_ALL_TESTS();
  rclcpp::shutdown();
  return result;
}
