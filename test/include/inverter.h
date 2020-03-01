#pragma once

#include <ros/ros.h>
#include <dvs_msgs/EventArray.h>

namespace my_inverter{

class Inverter{
public:
	Inverter();
private:
	ros::NodeHandle nh_;
	ros::Publisher pub_;
	ros::Subscriber sub_;
	void eventCallback(const dvs_msgs::EventArray::ConstPtr &msg);	
	
};

}
