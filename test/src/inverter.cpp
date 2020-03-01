#include "inverter.h"
#include <iostream>
#include <ros/ros.h>

using namespace std;

namespace my_inverter{

Inverter::Inverter(){
	cout << "Init an inverter with a subscriber and publisher."<<endl;
	sub_ = nh_.subscribe("/dvs/events", 0, &Inverter::eventCallback, this);
	pub_ = nh_.advertise<dvs_msgs::EventArray>("/invert_events", 1);
}

void Inverter::eventCallback(const dvs_msgs::EventArray::ConstPtr &msg){
	dvs_msgs::EventArray invertMsg;
	invertMsg.header = msg->header;
	invertMsg.width = msg->width;
	invertMsg.height = msg->height;
	for(int i=0; i<msg->events.size(); ++i){
		dvs_msgs::Event e;
		e = msg->events[i];
		e.polarity = 1-e.polarity;	// inverse the polarity
		invertMsg.events.push_back(e);
	}	
	pub_.publish(invertMsg);
}

}

