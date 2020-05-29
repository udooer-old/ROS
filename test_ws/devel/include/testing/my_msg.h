// Generated by gencpp from file testing/my_msg.msg
// DO NOT EDIT!


#ifndef TESTING_MESSAGE_MY_MSG_H
#define TESTING_MESSAGE_MY_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace testing
{
template <class ContainerAllocator>
struct my_msg_
{
  typedef my_msg_<ContainerAllocator> Type;

  my_msg_()
    : name()
    , age(0)
    , sex()  {
    }
  my_msg_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , age(0)
    , sex(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef int64_t _age_type;
  _age_type age;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sex_type;
  _sex_type sex;





  typedef boost::shared_ptr< ::testing::my_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::testing::my_msg_<ContainerAllocator> const> ConstPtr;

}; // struct my_msg_

typedef ::testing::my_msg_<std::allocator<void> > my_msg;

typedef boost::shared_ptr< ::testing::my_msg > my_msgPtr;
typedef boost::shared_ptr< ::testing::my_msg const> my_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::testing::my_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::testing::my_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::testing::my_msg_<ContainerAllocator1> & lhs, const ::testing::my_msg_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.age == rhs.age &&
    lhs.sex == rhs.sex;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::testing::my_msg_<ContainerAllocator1> & lhs, const ::testing::my_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace testing

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::testing::my_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::testing::my_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::testing::my_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::testing::my_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::testing::my_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::testing::my_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::testing::my_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23a1de837c8644a2ce845ae9317db1e6";
  }

  static const char* value(const ::testing::my_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23a1de837c8644a2ULL;
  static const uint64_t static_value2 = 0xce845ae9317db1e6ULL;
};

template<class ContainerAllocator>
struct DataType< ::testing::my_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "testing/my_msg";
  }

  static const char* value(const ::testing::my_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::testing::my_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"int64 age\n"
"string sex \n"
;
  }

  static const char* value(const ::testing::my_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::testing::my_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.age);
      stream.next(m.sex);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct my_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::testing::my_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::testing::my_msg_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "age: ";
    Printer<int64_t>::stream(s, indent + "  ", v.age);
    s << indent << "sex: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sex);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TESTING_MESSAGE_MY_MSG_H
