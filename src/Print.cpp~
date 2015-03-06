// %Tag(FULLTEXT)%
#include "ros/ros.h"
#include "std_msgs/Int64.h"

// %Tag(CALLBACK)%
void chatter1Callback(const std_msgs::Int64::ConstPtr& msg)
{
  ROS_INFO("Number: %d", msg->data);
}

void chatter2Callback(const std_msgs::Int64::ConstPtr& msg)
{
  ROS_INFO("Its square: %d", msg->data);
}

// %EndTag(CALLBACK)%

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;
  
// %Tag(SUBSCRIBER)%
  ros::Subscriber sub1 = n.subscribe("topic_numbers", 1000, chatter1Callback);
  ros::Subscriber sub2 = n.subscribe("topic_squares", 1000, chatter2Callback);
// %EndTag(SUBSCRIBER)%

// %Tag(SPIN)%
  ros::spin();
// %EndTag(SPIN)%

  return 0;
}
// %EndTag(FULLTEXT)%
