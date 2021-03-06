// Generated by gencpp from file supervisor/MoveGripper.msg
// DO NOT EDIT!


#ifndef SUPERVISOR_MESSAGE_MOVEGRIPPER_H
#define SUPERVISOR_MESSAGE_MOVEGRIPPER_H

#include <ros/service_traits.h>


#include <supervisor/MoveGripperRequest.h>
#include <supervisor/MoveGripperResponse.h>


namespace supervisor
{

struct MoveGripper
{

typedef MoveGripperRequest Request;
typedef MoveGripperResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveGripper
} // namespace supervisor


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::supervisor::MoveGripper > {
  static const char* value()
  {
    return "3548dafcab16b5653ad3136b0a96898d";
  }

  static const char* value(const ::supervisor::MoveGripper&) { return value(); }
};

template<>
struct DataType< ::supervisor::MoveGripper > {
  static const char* value()
  {
    return "supervisor/MoveGripper";
  }

  static const char* value(const ::supervisor::MoveGripper&) { return value(); }
};


// service_traits::MD5Sum< ::supervisor::MoveGripperRequest> should match 
// service_traits::MD5Sum< ::supervisor::MoveGripper > 
template<>
struct MD5Sum< ::supervisor::MoveGripperRequest>
{
  static const char* value()
  {
    return MD5Sum< ::supervisor::MoveGripper >::value();
  }
  static const char* value(const ::supervisor::MoveGripperRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervisor::MoveGripperRequest> should match 
// service_traits::DataType< ::supervisor::MoveGripper > 
template<>
struct DataType< ::supervisor::MoveGripperRequest>
{
  static const char* value()
  {
    return DataType< ::supervisor::MoveGripper >::value();
  }
  static const char* value(const ::supervisor::MoveGripperRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::supervisor::MoveGripperResponse> should match 
// service_traits::MD5Sum< ::supervisor::MoveGripper > 
template<>
struct MD5Sum< ::supervisor::MoveGripperResponse>
{
  static const char* value()
  {
    return MD5Sum< ::supervisor::MoveGripper >::value();
  }
  static const char* value(const ::supervisor::MoveGripperResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervisor::MoveGripperResponse> should match 
// service_traits::DataType< ::supervisor::MoveGripper > 
template<>
struct DataType< ::supervisor::MoveGripperResponse>
{
  static const char* value()
  {
    return DataType< ::supervisor::MoveGripper >::value();
  }
  static const char* value(const ::supervisor::MoveGripperResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SUPERVISOR_MESSAGE_MOVEGRIPPER_H
