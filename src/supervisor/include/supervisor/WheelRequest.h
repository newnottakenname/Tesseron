// Generated by gencpp from file supervisor/WheelRequest.msg
// DO NOT EDIT!


#ifndef SUPERVISOR_MESSAGE_WHEELREQUEST_H
#define SUPERVISOR_MESSAGE_WHEELREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace supervisor
{
template <class ContainerAllocator>
struct WheelRequest_
{
  typedef WheelRequest_<ContainerAllocator> Type;

  WheelRequest_()
    : distance(0.0)  {
    }
  WheelRequest_(const ContainerAllocator& _alloc)
    : distance(0.0)  {
    }



   typedef float _distance_type;
  _distance_type distance;




  typedef boost::shared_ptr< ::supervisor::WheelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supervisor::WheelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WheelRequest_

typedef ::supervisor::WheelRequest_<std::allocator<void> > WheelRequest;

typedef boost::shared_ptr< ::supervisor::WheelRequest > WheelRequestPtr;
typedef boost::shared_ptr< ::supervisor::WheelRequest const> WheelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supervisor::WheelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supervisor::WheelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace supervisor

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'supervisor': ['/home/newnottakenname/Coding/Tesseron/src/supervisor/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::supervisor::WheelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supervisor::WheelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervisor::WheelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervisor::WheelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervisor::WheelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervisor::WheelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supervisor::WheelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e77fb10f0c8b4833ec273aa9ac74459";
  }

  static const char* value(const ::supervisor::WheelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e77fb10f0c8b483ULL;
  static const uint64_t static_value2 = 0x3ec273aa9ac74459ULL;
};

template<class ContainerAllocator>
struct DataType< ::supervisor::WheelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supervisor/WheelRequest";
  }

  static const char* value(const ::supervisor::WheelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supervisor::WheelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 distance\n\
";
  }

  static const char* value(const ::supervisor::WheelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supervisor::WheelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct WheelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supervisor::WheelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::supervisor::WheelRequest_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUPERVISOR_MESSAGE_WHEELREQUEST_H
