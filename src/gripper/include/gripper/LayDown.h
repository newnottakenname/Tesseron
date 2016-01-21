// Generated by gencpp from file gripper/LayDown.msg
// DO NOT EDIT!


#ifndef GRIPPER_MESSAGE_LAYDOWN_H
#define GRIPPER_MESSAGE_LAYDOWN_H

#include <ros/service_traits.h>


#include <gripper/LayDownRequest.h>
#include <gripper/LayDownResponse.h>


namespace gripper
{

struct LayDown
{

typedef LayDownRequest Request;
typedef LayDownResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LayDown
} // namespace gripper


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gripper::LayDown > {
  static const char* value()
  {
    return "52707f1aa79bcb694bdb48d3cc3420b7";
  }

  static const char* value(const ::gripper::LayDown&) { return value(); }
};

template<>
struct DataType< ::gripper::LayDown > {
  static const char* value()
  {
    return "gripper/LayDown";
  }

  static const char* value(const ::gripper::LayDown&) { return value(); }
};


// service_traits::MD5Sum< ::gripper::LayDownRequest> should match 
// service_traits::MD5Sum< ::gripper::LayDown > 
template<>
struct MD5Sum< ::gripper::LayDownRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gripper::LayDown >::value();
  }
  static const char* value(const ::gripper::LayDownRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gripper::LayDownRequest> should match 
// service_traits::DataType< ::gripper::LayDown > 
template<>
struct DataType< ::gripper::LayDownRequest>
{
  static const char* value()
  {
    return DataType< ::gripper::LayDown >::value();
  }
  static const char* value(const ::gripper::LayDownRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gripper::LayDownResponse> should match 
// service_traits::MD5Sum< ::gripper::LayDown > 
template<>
struct MD5Sum< ::gripper::LayDownResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gripper::LayDown >::value();
  }
  static const char* value(const ::gripper::LayDownResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gripper::LayDownResponse> should match 
// service_traits::DataType< ::gripper::LayDown > 
template<>
struct DataType< ::gripper::LayDownResponse>
{
  static const char* value()
  {
    return DataType< ::gripper::LayDown >::value();
  }
  static const char* value(const ::gripper::LayDownResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GRIPPER_MESSAGE_LAYDOWN_H