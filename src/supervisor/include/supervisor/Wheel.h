// Generated by gencpp from file supervisor/Wheel.msg
// DO NOT EDIT!


#ifndef SUPERVISOR_MESSAGE_WHEEL_H
#define SUPERVISOR_MESSAGE_WHEEL_H

#include <ros/service_traits.h>


#include <supervisor/WheelRequest.h>
#include <supervisor/WheelResponse.h>


namespace supervisor
{

struct Wheel
{

typedef WheelRequest Request;
typedef WheelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Wheel
} // namespace supervisor


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::supervisor::Wheel > {
  static const char* value()
  {
    return "d20927af59529502236f1660ce633198";
  }

  static const char* value(const ::supervisor::Wheel&) { return value(); }
};

template<>
struct DataType< ::supervisor::Wheel > {
  static const char* value()
  {
    return "supervisor/Wheel";
  }

  static const char* value(const ::supervisor::Wheel&) { return value(); }
};


// service_traits::MD5Sum< ::supervisor::WheelRequest> should match 
// service_traits::MD5Sum< ::supervisor::Wheel > 
template<>
struct MD5Sum< ::supervisor::WheelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::supervisor::Wheel >::value();
  }
  static const char* value(const ::supervisor::WheelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervisor::WheelRequest> should match 
// service_traits::DataType< ::supervisor::Wheel > 
template<>
struct DataType< ::supervisor::WheelRequest>
{
  static const char* value()
  {
    return DataType< ::supervisor::Wheel >::value();
  }
  static const char* value(const ::supervisor::WheelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::supervisor::WheelResponse> should match 
// service_traits::MD5Sum< ::supervisor::Wheel > 
template<>
struct MD5Sum< ::supervisor::WheelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::supervisor::Wheel >::value();
  }
  static const char* value(const ::supervisor::WheelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervisor::WheelResponse> should match 
// service_traits::DataType< ::supervisor::Wheel > 
template<>
struct DataType< ::supervisor::WheelResponse>
{
  static const char* value()
  {
    return DataType< ::supervisor::Wheel >::value();
  }
  static const char* value(const ::supervisor::WheelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SUPERVISOR_MESSAGE_WHEEL_H
