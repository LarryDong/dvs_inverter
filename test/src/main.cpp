#include <iostream>
#include <ros/ros.h>
#include <dvs_msgs/EventArray.h>
#include "inverter.h"

using namespace std;

int main(int argc, char* argv[]){
	ros::init(argc, argv, "inverter");
	ROS_INFO("Use an inverter");

	my_inverter::Inverter* ivt;
	ivt = new my_inverter::Inverter;

	ros::spin();

	delete ivt;
	return 0;
}

