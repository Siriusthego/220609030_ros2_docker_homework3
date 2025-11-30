// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from command_server_pkg:srv/ComputeCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__STRUCT_HPP_
#define COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__command_server_pkg__srv__ComputeCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__command_server_pkg__srv__ComputeCommand_Request __declspec(deprecated)
#endif

namespace command_server_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeCommand_Request_
{
  using Type = ComputeCommand_Request_<ContainerAllocator>;

  explicit ComputeCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = 0.0;
    }
  }

  explicit ComputeCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = 0.0;
    }
  }

  // field types and members
  using _input_type =
    double;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const double & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__command_server_pkg__srv__ComputeCommand_Request
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__command_server_pkg__srv__ComputeCommand_Request
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeCommand_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeCommand_Request_

// alias to use template instance with default allocator
using ComputeCommand_Request =
  command_server_pkg::srv::ComputeCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace command_server_pkg


#ifndef _WIN32
# define DEPRECATED__command_server_pkg__srv__ComputeCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__command_server_pkg__srv__ComputeCommand_Response __declspec(deprecated)
#endif

namespace command_server_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeCommand_Response_
{
  using Type = ComputeCommand_Response_<ContainerAllocator>;

  explicit ComputeCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = "";
    }
  }

  explicit ComputeCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = "";
    }
  }

  // field types and members
  using _output_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__output(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__command_server_pkg__srv__ComputeCommand_Response
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__command_server_pkg__srv__ComputeCommand_Response
    std::shared_ptr<command_server_pkg::srv::ComputeCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeCommand_Response_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeCommand_Response_

// alias to use template instance with default allocator
using ComputeCommand_Response =
  command_server_pkg::srv::ComputeCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace command_server_pkg

namespace command_server_pkg
{

namespace srv
{

struct ComputeCommand
{
  using Request = command_server_pkg::srv::ComputeCommand_Request;
  using Response = command_server_pkg::srv::ComputeCommand_Response;
};

}  // namespace srv

}  // namespace command_server_pkg

#endif  // COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__STRUCT_HPP_
