cmake_minimum_required(VERSION 3.8)
project(tortoisebot_waypoints)

##
# 1. Find Dependencies
##
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_gtest REQUIRED)           # For GTest-based tests
find_package(rosidl_default_generators REQUIRED)   # Ensures ROSIDL is included
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(action_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(GTest REQUIRED)

##
# 2. Generate Action Interfaces
##
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Waypoint.action"
  DEPENDENCIES geometry_msgs std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

include_directories(include ${rosidl_generate_interfaces_INCLUDE_DIRS})

##
# 3. Build the Action Server Executable
##
add_executable(tortoisebot_action_server src/tortoisebot_action_server.cpp)
ament_target_dependencies(
  tortoisebot_action_server
  rclcpp
  rclcpp_action
  geometry_msgs
  nav_msgs
  std_msgs
  action_msgs
  tf2
)

# Link the generated ROSIDL interfaces
rosidl_target_interfaces(tortoisebot_action_server
  ${PROJECT_NAME} "rosidl_typesupport_cpp"
)

install(TARGETS
  tortoisebot_action_server
  DESTINATION lib/${PROJECT_NAME}
)

##
# 4. GTest-Based Tests (Optional)
##
# If you have a test file at: test/test_tortoisebot_waypoints.cpp
if(BUILD_TESTING)
  ament_add_gtest(test_tortoisebot_waypoints test/waypoints_test.cpp)
  if(TARGET test_tortoisebot_waypoints)
    ament_target_dependencies(
      test_tortoisebot_waypoints
      rclcpp
      rclcpp_action
      geometry_msgs
      nav_msgs
      std_msgs
      action_msgs
    )
    rosidl_target_interfaces(test_tortoisebot_waypoints
      ${PROJECT_NAME} "rosidl_typesupport_cpp"
    )
  endif()
endif()


##
# 5. Finalize the Package
##
ament_package()




