#include "ros/ros.h"
#include "std_msgs/Int64.h"

#include <sstream>

 std_msgs::Int64 my_msg;

 ros::Publisher chatter_pub;

void numbersCallback(const std_msgs::Int64::ConstPtr& msg)
{ 
  if(ros::ok())
  {
     
    ROS_INFO("%d", (msg->data)*(msg->data));
    my_msg.data=((msg->data)*(msg->data));
    chatter_pub.publish(my_msg);   
  }
 
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "Squares");
 
  ros::NodeHandle n;
 
  ros::Subscriber sub = n.subscribe<std_msgs::Int64>("topic_numbers", 1000, numbersCallback);
  chatter_pub = n.advertise<std_msgs::Int64>("topic_squares", 1000);

  ros::spin();

  return 0;
}
