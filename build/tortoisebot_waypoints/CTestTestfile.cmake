# CMake generated Testfile for 
# Source directory: /home/user/ros2_ws/src/tortoisebot_waypoints
# Build directory: /home/user/ros2_ws/build/tortoisebot_waypoints
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_tortoisebot_waypoints "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tortoisebot_waypoints/test_results/tortoisebot_waypoints/test_tortoisebot_waypoints.gtest.xml" "--package-name" "tortoisebot_waypoints" "--output-file" "/home/user/ros2_ws/build/tortoisebot_waypoints/ament_cmake_gtest/test_tortoisebot_waypoints.txt" "--command" "/home/user/ros2_ws/build/tortoisebot_waypoints/test_tortoisebot_waypoints" "--gtest_output=xml:/home/user/ros2_ws/build/tortoisebot_waypoints/test_results/tortoisebot_waypoints/test_tortoisebot_waypoints.gtest.xml")
set_tests_properties(test_tortoisebot_waypoints PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/user/ros2_ws/build/tortoisebot_waypoints/test_tortoisebot_waypoints" TIMEOUT "60" WORKING_DIRECTORY "/home/user/ros2_ws/build/tortoisebot_waypoints" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/user/ros2_ws/src/tortoisebot_waypoints/CMakeLists.txt;61;ament_add_gtest;/home/user/ros2_ws/src/tortoisebot_waypoints/CMakeLists.txt;0;")
subdirs("tortoisebot_waypoints__py")
subdirs("gtest")
