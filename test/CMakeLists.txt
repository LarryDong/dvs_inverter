cmake_minimum_required(VERSION 2.8)
project(test)

find_package(catkin_simple REQUIRED)

catkin_simple()
catkin_package()

include_directories(
	include
   	${catkin_INCLUDE_DIRS}
)

cs_add_executable(inverter src/inverter.cpp src/main.cpp)
# cs_export()
