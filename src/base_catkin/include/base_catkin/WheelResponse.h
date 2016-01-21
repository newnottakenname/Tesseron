// Generated by gencpp from file base_catkin/WheelResponse.msg
// DO NOT EDIT!


#ifndef BASE_CATKIN_MESSAGE_WHEELRESPONSE_H
#define BASE_CATKIN_MESSAGE_WHEELRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace base_catkin
{
template <class ContainerAllocator>
struct WheelResponse_
{
  typedef WheelResponse_<ContainerAllocator> Type;

  WheelResponse_()
    : succeeded(false)
    , error()  {
    }
  WheelResponse_(const ContainerAllocator& _alloc)
    : succeeded(false)
    , error(_alloc)  {
    }



   typedef uint8_t _succeeded_type;
  _succeeded_type succeeded;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  _error_type error;




  typedef boost::shared_ptr< ::base_catkin::WheelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::base_catkin::WheelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct WheelResponse_

typedef ::base_catkin::WheelResponse_<std::allocator<void> > WheelResponse;

typedef boost::shared_ptr< ::base_catkin::WheelResponse > WheelResponsePtr;
typedef boost::shared_ptr< ::base_catkin::WheelResponse const> WheelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::base_catkin::WheelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::base_catkin::WheelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace base_catkin

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'base_catkin': ['/home/sanderkempen/Coding/Tesseron/src/base_catkin/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::base_catkin::WheelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::base_catkin::WheelResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::base_catkin::WheelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::base_catkin::WheelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::base_catkin::WheelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::base_catkin::WheelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::base_catkin::WheelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f98c37a16a9673a5429ccb0e5cd31a8";
  }

  static const char* value(const ::base_catkin::WheelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f98c37a16a9673aULL;
  static const uint64_t static_value2 = 0x5429ccb0e5cd31a8ULL;
};

template<class ContainerAllocator>
struct DataType< ::base_catkin::WheelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "base_catkin/WheelResponse";
  }

  static const char* value(const ::base_catkin::WheelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::base_catkin::WheelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool succeeded\n\
string error\n\
\n\
";
  }

  static const char* value(const ::base_catkin::WheelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::base_catkin::WheelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.succeeded);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct WheelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::base_catkin::WheelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::base_catkin::WheelResponse_<ContainerAllocator>& v)
  {
    s << indent << "succeeded: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.succeeded);
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASE_CATKIN_MESSAGE_WHEELRESPONSE_H
