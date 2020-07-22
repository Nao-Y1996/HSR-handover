// Generated by gencpp from file hsr_handing/input4handingRequest.msg
// DO NOT EDIT!


#ifndef HSR_HANDING_MESSAGE_INPUT4HANDINGREQUEST_H
#define HSR_HANDING_MESSAGE_INPUT4HANDINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hsr_handing
{
template <class ContainerAllocator>
struct input4handingRequest_
{
  typedef input4handingRequest_<ContainerAllocator> Type;

  input4handingRequest_()
    : input_key()  {
    }
  input4handingRequest_(const ContainerAllocator& _alloc)
    : input_key(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _input_key_type;
  _input_key_type input_key;





  typedef boost::shared_ptr< ::hsr_handing::input4handingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hsr_handing::input4handingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct input4handingRequest_

typedef ::hsr_handing::input4handingRequest_<std::allocator<void> > input4handingRequest;

typedef boost::shared_ptr< ::hsr_handing::input4handingRequest > input4handingRequestPtr;
typedef boost::shared_ptr< ::hsr_handing::input4handingRequest const> input4handingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hsr_handing::input4handingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hsr_handing::input4handingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hsr_handing

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'hsr_handing': ['/home/naoyamada/catkin_ws3/src/hsr_handing/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hsr_handing::input4handingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hsr_handing::input4handingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hsr_handing::input4handingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cabbd19ea8b4c39ec634679b262a6b4f";
  }

  static const char* value(const ::hsr_handing::input4handingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcabbd19ea8b4c39eULL;
  static const uint64_t static_value2 = 0xc634679b262a6b4fULL;
};

template<class ContainerAllocator>
struct DataType< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hsr_handing/input4handingRequest";
  }

  static const char* value(const ::hsr_handing::input4handingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string  input_key\n\
";
  }

  static const char* value(const ::hsr_handing::input4handingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input_key);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct input4handingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hsr_handing::input4handingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hsr_handing::input4handingRequest_<ContainerAllocator>& v)
  {
    s << indent << "input_key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.input_key);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HSR_HANDING_MESSAGE_INPUT4HANDINGREQUEST_H