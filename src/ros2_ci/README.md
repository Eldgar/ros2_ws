
### INSTALL AND START DOCEKR ###
sudo apt-get update
sudo apt-get install -y docker.io docker-compose
sudo service docker start

sudo usermod -aG docker $USER
newgrp docker

sudo systemctl restart docker
### 

### INITIALIZE JENKINS ###
cd ~/webpage_ws
bash start_jenkins.sh

click link displayed in terminal or execute
jenkins_address

obtain password
cat /home/user/webpage_ws/jenkins/secrets/initialAdminPassword

paste password with username admin into jenkins website and login
On the dashboard click ros2_ci_pipeline
### 

### INITIALIZE ROS2 PIPELINE ###
Go to:
https://github.com/Eldgar/ros2_ws
Follow instructions on creating a pull request in CP24

wait up to 3 mins after the pull request is accepted for the build and test to initialize.
May take some time to download and build images.
### 


### VIEW TEST RESULTS ON JENKINS ###
Open Jenkins website
click on the latest build Number once begins processing 
click "console output" and scroll near the bottom 

Observe:
Summary: 3 tests, 0 errors, 0 failures, 0 skipped
### 
