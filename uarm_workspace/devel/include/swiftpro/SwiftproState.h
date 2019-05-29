// Generated by gencpp from file swiftpro/SwiftproState.msg
// DO NOT EDIT!


#ifndef SWIFTPRO_MESSAGE_SWIFTPROSTATE_H
#define SWIFTPRO_MESSAGE_SWIFTPROSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace swiftpro
{
template <class ContainerAllocator>
struct SwiftproState_
{
  typedef SwiftproState_<ContainerAllocator> Type;

  SwiftproState_()
    : motor_angle1(0.0)
    , motor_angle2(0.0)
    , motor_angle3(0.0)
    , motor_angle4(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , pump(0)
    , swiftpro_status(0)
    , gripper(0)  {
    }
  SwiftproState_(const ContainerAllocator& _alloc)
    : motor_angle1(0.0)
    , motor_angle2(0.0)
    , motor_angle3(0.0)
    , motor_angle4(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , pump(0)
    , swiftpro_status(0)
    , gripper(0)  {
  (void)_alloc;
    }



   typedef double _motor_angle1_type;
  _motor_angle1_type motor_angle1;

   typedef double _motor_angle2_type;
  _motor_angle2_type motor_angle2;

   typedef double _motor_angle3_type;
  _motor_angle3_type motor_angle3;

   typedef double _motor_angle4_type;
  _motor_angle4_type motor_angle4;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef uint8_t _pump_type;
  _pump_type pump;

   typedef uint8_t _swiftpro_status_type;
  _swiftpro_status_type swiftpro_status;

   typedef uint8_t _gripper_type;
  _gripper_type gripper;





  typedef boost::shared_ptr< ::swiftpro::SwiftproState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::swiftpro::SwiftproState_<ContainerAllocator> const> ConstPtr;

}; // struct SwiftproState_

typedef ::swiftpro::SwiftproState_<std::allocator<void> > SwiftproState;

typedef boost::shared_ptr< ::swiftpro::SwiftproState > SwiftproStatePtr;
typedef boost::shared_ptr< ::swiftpro::SwiftproState const> SwiftproStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::swiftpro::SwiftproState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::swiftpro::SwiftproState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace swiftpro

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'HasHeader': False, 'IsMessage': True, 'IsFixedSize': True}
// {'swiftpro': ['/home/bowen/uarm_workspace/src/swiftpro/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct HasHeader< ::swiftpro::SwiftproState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::swiftpro::SwiftproState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::swiftpro::SwiftproState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::swiftpro::SwiftproState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::swiftpro::SwiftproState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::swiftpro::SwiftproState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::swiftpro::SwiftproState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bcd9671f860a15ba5765d673098d21bb";
  }

  static const char* value(const ::swiftpro::SwiftproState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbcd9671f860a15baULL;
  static const uint64_t static_value2 = 0x5765d673098d21bbULL;
};

template<class ContainerAllocator>
struct DataType< ::swiftpro::SwiftproState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "swiftpro/SwiftproState";
  }

  static const char* value(const ::swiftpro::SwiftproState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::swiftpro::SwiftproState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 motor_angle1\n\
float64 motor_angle2\n\
float64 motor_angle3\n\
float64 motor_angle4\n\
float64 x\n\
float64 y\n\
float64 z\n\
uint8 	pump\n\
uint8 	swiftpro_status\n\
uint8 	gripper\n\
\n\
";
  }

  static const char* value(const ::swiftpro::SwiftproState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::swiftpro::SwiftproState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motor_angle1);
      stream.next(m.motor_angle2);
      stream.next(m.motor_angle3);
      stream.next(m.motor_angle4);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.pump);
      stream.next(m.swiftpro_status);
      stream.next(m.gripper);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwiftproState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::swiftpro::SwiftproState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::swiftpro::SwiftproState_<ContainerAllocator>& v)
  {
    s << indent << "motor_angle1: ";
    Printer<double>::stream(s, indent + "  ", v.motor_angle1);
    s << indent << "motor_angle2: ";
    Printer<double>::stream(s, indent + "  ", v.motor_angle2);
    s << indent << "motor_angle3: ";
    Printer<double>::stream(s, indent + "  ", v.motor_angle3);
    s << indent << "motor_angle4: ";
    Printer<double>::stream(s, indent + "  ", v.motor_angle4);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "pump: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pump);
    s << indent << "swiftpro_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.swiftpro_status);
    s << indent << "gripper: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gripper);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SWIFTPRO_MESSAGE_SWIFTPROSTATE_H
