# TortoiseBot Waypoints Testing

## Overview
This package provides test cases for verifying the functionality of the Waypoints Action Server in ROS2. The tests ensure that the robot reaches the target waypoints with the correct orientation and detect failure conditions such as timeouts or an unavailable action server.

## Prerequisites
Ensure that your environment is correctly set up before running the tests:

1. **ROS2 Setup**: Source the necessary ROS environment:
   
   source /opt/ros/galactic/setup.bash
   
2. **Workspace Setup**: Navigate to your workspace and source it:
   
   cd ~/ros2_ws
   source install/setup.bash
   

## Running the ROS2 Simulation
Launch the TortoiseBot simulation in Gazebo:

ros2 launch tortoisebot_bringup bringup.launch.py use_sim_time:=True

If Gazebo encounters issues, restart it using:

kill -9 <gazebo_pid>


## Running the Waypoints Action Server
Start the Waypoints Action Server in a separate terminal:

source /opt/ros/galactic/setup.bash
source ~/ros2_ws/install/setup.bash
ros2 run tortoisebot_waypoints tortoisebot_action_server


## Running Tests
### Testing Passing Conditions
A test is considered **passing** if the robot successfully reaches the target **X, Y** position with the correct **yaw** orientation.

Execute the following command to test passing conditions:

cd ~/ros2_ws && colcon build && source install/setup.bash
colcon test --packages-select tortoisebot_waypoints --event-handler=console_direct+
colcon test-result --all

Expected output:

Summary: 2 tests, 0 errors, 0 failures, 0 skipped


### Testing Failing Conditions
A test is considered **failing** if:
- The action server is **unavailable**.
- stop action server in action server in terminal 2 with CTRL C to test error

- The robot **times out** before reaching the target waypoint.
- Change the target position to unreachable values
Lines 19 and 20 tortoisebot_waypoints/test/waypoints_test.cpp
Example
// Set the target coordinates (adjust as needed)
const double TARGET_X = 50.25;
const double TARGET_Y = 50.25;


Execute the following command to test failing conditions:

cd ~/ros2_ws && colcon build && source install/setup.bash
colcon test --packages-select tortoisebot_waypoints --event-handler=console_direct+
colcon test-result --all

Expected output:

Summary: 2 tests, 1 errors, 1 failures, 0 skipped


## Notes
- Ensure the action server is running before executing tests.
- Verify that the robot is able to move freely in the simulation environment.
- If tests are not running as expected, check Gazebo, ROS2 logs, and action server logs for potential issues.

---
**Author:** [Your Name]
**Last Updated:** [Date]


