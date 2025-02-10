# Use an official ROS 2 Galactic base image with Gazebo
FROM osrf/ros:galactic-desktop

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive \
    ROS_DISTRO=galactic \
    COLCON_WS=/home/user/ros2_ws

# Install necessary dependencies
RUN apt-get update && apt-get install -y \
    python3-pip \
    python3-rosdep \
    python3-colcon-common-extensions \
    ros-galactic-gazebo-ros \
    ros-galactic-gazebo-ros-pkgs \
    ros-galactic-ros2-control \
    ros-galactic-ros2-controllers \
    ros-galactic-xacro \
    ros-galactic-joint-state-publisher \
    ros-galactic-joint-state-publisher-gui \
    ros-galactic-robot-state-publisher \
    ros-galactic-navigation2 \
    ros-galactic-nav2-bringup \
    ros-galactic-rosbridge-server \
    && rm -rf /var/lib/apt/lists/*

# Initialize rosdep
RUN rosdep update && rosdep fix-permissions

# Create a ROS 2 workspace
WORKDIR ${COLCON_WS}

# Copy all ROS 2 packages (ros2_ci, tortoisebot, tortoisebot_waypoints)
COPY ./src ${COLCON_WS}/src

# Install dependencies
RUN rosdep install --from-paths src --ignore-src -r -y

# Build the workspace with colcon
RUN /bin/bash -c "source /opt/ros/galactic/setup.bash && colcon build"

# Set up entrypoint
RUN echo "source ${COLCON_WS}/install/setup.bash" >> /root/.bashrc
ENTRYPOINT ["/bin/bash", "-c", "source /root/.bashrc && bash"]
