#ifndef _ARCAM_H_
#define _ARCAM_H_


#include <ros/ros.h>

class ARCam {
public:
  void init(ros::NodeHandle& pnh, ros::NodeHandle& nh) {
    
  }

private:
  ros::Subscriber pose_sub_;

  // ros::Publisher cloud_ds_pub_; 
};

#endif // _ARCAM_H_