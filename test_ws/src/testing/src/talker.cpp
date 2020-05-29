#include<ros/ros.h>
#include<testing/my_msg.h>

int main(int argc, char** argv){
	ros::init(argc, argv, "talker_node");
	ros::NodeHandle n;
	ros::Publisher pb = n.advertise<testing::my_msg>("chatter", 10);
	ros::Rate loop_rate(10);
	int count=0;
	testing::my_msg msg;
	while(ros::ok()){
		msg.name = "shane";
		msg.age = count;
		msg.sex = "male";
		pb.publish(msg);
		ros::spinOnce();
		loop_rate.sleep();
		count++;
	}
	return 0;
}
