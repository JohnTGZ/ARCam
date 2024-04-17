#include <ros/ros.h>

#include <arcam/arcam.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "arcam");
  ros::NodeHandle pnh("~"), nh;

  ARCam arcam;

  arcam.init(pnh, nh);

  ros::spin();

  return 0;
}