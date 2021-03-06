/* Auto-generated by genmsg_cpp for file /home/biorob/rosstacks/core_dev/core_communication_msgs/msg/ControlError.msg */
#ifndef CORE_COMMUNICATION_MSGS_MESSAGE_CONTROLERROR_H
#define CORE_COMMUNICATION_MSGS_MESSAGE_CONTROLERROR_H
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


namespace core_communication_msgs
{
template <class ContainerAllocator>
struct ControlError_ {
  typedef ControlError_<ContainerAllocator> Type;

  ControlError_()
  : name()
  , description()
  , values()
  {
  }

  ControlError_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , description(_alloc)
  , values(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  description;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _values_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  values;


  typedef boost::shared_ptr< ::core_communication_msgs::ControlError_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_msgs::ControlError_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ControlError
typedef  ::core_communication_msgs::ControlError_<std::allocator<void> > ControlError;

typedef boost::shared_ptr< ::core_communication_msgs::ControlError> ControlErrorPtr;
typedef boost::shared_ptr< ::core_communication_msgs::ControlError const> ControlErrorConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::core_communication_msgs::ControlError_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::core_communication_msgs::ControlError_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace core_communication_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::ControlError_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::ControlError_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_msgs::ControlError_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d5ba5881345546b546251ee2cbcf494f";
  }

  static const char* value(const  ::core_communication_msgs::ControlError_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd5ba5881345546b5ULL;
  static const uint64_t static_value2 = 0x46251ee2cbcf494fULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_msgs::ControlError_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_msgs/ControlError";
  }

  static const char* value(const  ::core_communication_msgs::ControlError_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_msgs::ControlError_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string name\n\
string description\n\
float64[] values\n\
\n\
";
  }

  static const char* value(const  ::core_communication_msgs::ControlError_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_msgs::ControlError_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.description);
    stream.next(m.values);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ControlError_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::core_communication_msgs::ControlError_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::core_communication_msgs::ControlError_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.values[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // CORE_COMMUNICATION_MSGS_MESSAGE_CONTROLERROR_H

