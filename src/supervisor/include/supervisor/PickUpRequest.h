// Generated by gencpp from file supervisor/PickUpRequest.msg
// DO NOT EDIT!


#ifndef SUPERVISOR_MESSAGE_PICKUPREQUEST_H
#define SUPERVISOR_MESSAGE_PICKUPREQUEST_H


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
struct PickUpRequest_
{
  typedef PickUpRequest_<ContainerAllocator> Type;

  PickUpRequest_()
    : fully(false)  {
    }
  PickUpRequest_(const ContainerAllocator& _alloc)
    : fully(false)  {
    }



   typedef uint8_t _fully_type;
  _fully_type fully;




  typedef boost::shared_ptr< ::supervisor::PickUpRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supervisor::PickUpRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PickUpRequest_

typedef ::supervisor::PickUpRequest_<std::allocator<void> > PickUpRequest;

typedef boost::shared_ptr< ::supervisor::PickUpRequest > PickUpRequestPtr;
typedef boost::shared_ptr< ::supervisor::PickUpRequest const> PickUpRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supervisor::PickUpRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supervisor::PickUpRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::supervisor::PickUpRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supervisor::PickUpRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervisor::PickUpRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervisor::PickUpRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervisor::PickUpRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervisor::PickUpRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supervisor::PickUpRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e44b859fe10a4e4b6905a7dbed57e87";
  }

  static const char* value(const ::supervisor::PickUpRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e44b859fe10a4e4ULL;
  static const uint64_t static_value2 = 0xb6905a7dbed57e87ULL;
};

template<class ContainerAllocator>
struct DataType< ::supervisor::PickUpRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supervisor/PickUpRequest";
  }

  static const char* value(const ::supervisor::PickUpRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supervisor::PickUpRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool fully\n\
";
  }

  static const char* value(const ::supervisor::PickUpRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supervisor::PickUpRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fully);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PickUpRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supervisor::PickUpRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::supervisor::PickUpRequest_<ContainerAllocator>& v)
  {
    s << indent << "fully: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fully);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUPERVISOR_MESSAGE_PICKUPREQUEST_H
