/* Auto-generated by genmsg_cpp for file /home/biorob/rosstacks/core_dev/core_communication_srvs/srv/TrajectoryDuration.srv */
#ifndef CORE_COMMUNICATION_SRVS_SERVICE_TRAJECTORYDURATION_H
#define CORE_COMMUNICATION_SRVS_SERVICE_TRAJECTORYDURATION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "core_communication_msgs/BioRobJointTrajectoryPoint.h"



namespace core_communication_srvs
{
template <class ContainerAllocator>
struct TrajectoryDurationRequest_ {
  typedef TrajectoryDurationRequest_<ContainerAllocator> Type;

  TrajectoryDurationRequest_()
  : points()
  {
  }

  TrajectoryDurationRequest_(const ContainerAllocator& _alloc)
  : points(_alloc)
  {
  }

  typedef std::vector< ::core_communication_msgs::BioRobJointTrajectoryPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::core_communication_msgs::BioRobJointTrajectoryPoint_<ContainerAllocator> >::other >  _points_type;
  std::vector< ::core_communication_msgs::BioRobJointTrajectoryPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::core_communication_msgs::BioRobJointTrajectoryPoint_<ContainerAllocator> >::other >  points;


  typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TrajectoryDurationRequest
typedef  ::core_communication_srvs::TrajectoryDurationRequest_<std::allocator<void> > TrajectoryDurationRequest;

typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationRequest> TrajectoryDurationRequestPtr;
typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationRequest const> TrajectoryDurationRequestConstPtr;


template <class ContainerAllocator>
struct TrajectoryDurationResponse_ {
  typedef TrajectoryDurationResponse_<ContainerAllocator> Type;

  TrajectoryDurationResponse_()
  : duration()
  {
  }

  TrajectoryDurationResponse_(const ContainerAllocator& _alloc)
  : duration(_alloc)
  {
  }

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _duration_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  duration;


  typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TrajectoryDurationResponse
typedef  ::core_communication_srvs::TrajectoryDurationResponse_<std::allocator<void> > TrajectoryDurationResponse;

typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationResponse> TrajectoryDurationResponsePtr;
typedef boost::shared_ptr< ::core_communication_srvs::TrajectoryDurationResponse const> TrajectoryDurationResponseConstPtr;

struct TrajectoryDuration
{

typedef TrajectoryDurationRequest Request;
typedef TrajectoryDurationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct TrajectoryDuration
} // namespace core_communication_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f258c004639135fb5446936b775fc95f";
  }

  static const char* value(const  ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf258c004639135fbULL;
  static const uint64_t static_value2 = 0x5446936b775fc95fULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/TrajectoryDurationRequest";
  }

  static const char* value(const  ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
core_communication_msgs/BioRobJointTrajectoryPoint[] points\n\
\n\
================================================================================\n\
MSG: core_communication_msgs/BioRobJointTrajectoryPoint\n\
trajectory_msgs/JointTrajectoryPoint trajectoryPoint\n\
GripperAction gripperAction\n\
float64 reachingAccuracyCart\n\
float64 reachingAccuracyOrient\n\
float64 reachingAccuracyJoint\n\
float64 controlLoopRatio\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectoryPoint\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
duration time_from_start\n\
================================================================================\n\
MSG: core_communication_msgs/GripperAction\n\
float64 absolutePosition\n\
bool absPosIsSet\n\
bool closeGripper\n\
float64 noMovementTimeout\n\
bool openGripper\n\
bool useCustomNoMovementTimeout\n\
\n\
";
  }

  static const char* value(const  ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "584b5f43818472ef58b39ba3ce4894bb";
  }

  static const char* value(const  ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x584b5f43818472efULL;
  static const uint64_t static_value2 = 0x58b39ba3ce4894bbULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/TrajectoryDurationResponse";
  }

  static const char* value(const  ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
float64[] duration\n\
\n\
\n\
";
  }

  static const char* value(const  ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.points);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TrajectoryDurationRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.duration);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TrajectoryDurationResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<core_communication_srvs::TrajectoryDuration> {
  static const char* value() 
  {
    return "46af7238262708a25319e58c709f4839";
  }

  static const char* value(const core_communication_srvs::TrajectoryDuration&) { return value(); } 
};

template<>
struct DataType<core_communication_srvs::TrajectoryDuration> {
  static const char* value() 
  {
    return "core_communication_srvs/TrajectoryDuration";
  }

  static const char* value(const core_communication_srvs::TrajectoryDuration&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "46af7238262708a25319e58c709f4839";
  }

  static const char* value(const core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/TrajectoryDuration";
  }

  static const char* value(const core_communication_srvs::TrajectoryDurationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "46af7238262708a25319e58c709f4839";
  }

  static const char* value(const core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_srvs/TrajectoryDuration";
  }

  static const char* value(const core_communication_srvs::TrajectoryDurationResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CORE_COMMUNICATION_SRVS_SERVICE_TRAJECTORYDURATION_H

