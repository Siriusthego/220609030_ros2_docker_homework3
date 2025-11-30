// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from command_server_pkg:srv/ComputeCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__FUNCTIONS_H_
#define COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "command_server_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "command_server_pkg/srv/detail/compute_command__struct.h"

/// Initialize srv/ComputeCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * command_server_pkg__srv__ComputeCommand_Request
 * )) before or use
 * command_server_pkg__srv__ComputeCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Request__init(command_server_pkg__srv__ComputeCommand_Request * msg);

/// Finalize srv/ComputeCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Request__fini(command_server_pkg__srv__ComputeCommand_Request * msg);

/// Create srv/ComputeCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * command_server_pkg__srv__ComputeCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
command_server_pkg__srv__ComputeCommand_Request *
command_server_pkg__srv__ComputeCommand_Request__create();

/// Destroy srv/ComputeCommand message.
/**
 * It calls
 * command_server_pkg__srv__ComputeCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Request__destroy(command_server_pkg__srv__ComputeCommand_Request * msg);

/// Check for srv/ComputeCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Request__are_equal(const command_server_pkg__srv__ComputeCommand_Request * lhs, const command_server_pkg__srv__ComputeCommand_Request * rhs);

/// Copy a srv/ComputeCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Request__copy(
  const command_server_pkg__srv__ComputeCommand_Request * input,
  command_server_pkg__srv__ComputeCommand_Request * output);

/// Initialize array of srv/ComputeCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * command_server_pkg__srv__ComputeCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Request__Sequence__init(command_server_pkg__srv__ComputeCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/ComputeCommand messages.
/**
 * It calls
 * command_server_pkg__srv__ComputeCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Request__Sequence__fini(command_server_pkg__srv__ComputeCommand_Request__Sequence * array);

/// Create array of srv/ComputeCommand messages.
/**
 * It allocates the memory for the array and calls
 * command_server_pkg__srv__ComputeCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
command_server_pkg__srv__ComputeCommand_Request__Sequence *
command_server_pkg__srv__ComputeCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/ComputeCommand messages.
/**
 * It calls
 * command_server_pkg__srv__ComputeCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Request__Sequence__destroy(command_server_pkg__srv__ComputeCommand_Request__Sequence * array);

/// Check for srv/ComputeCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Request__Sequence__are_equal(const command_server_pkg__srv__ComputeCommand_Request__Sequence * lhs, const command_server_pkg__srv__ComputeCommand_Request__Sequence * rhs);

/// Copy an array of srv/ComputeCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Request__Sequence__copy(
  const command_server_pkg__srv__ComputeCommand_Request__Sequence * input,
  command_server_pkg__srv__ComputeCommand_Request__Sequence * output);

/// Initialize srv/ComputeCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * command_server_pkg__srv__ComputeCommand_Response
 * )) before or use
 * command_server_pkg__srv__ComputeCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Response__init(command_server_pkg__srv__ComputeCommand_Response * msg);

/// Finalize srv/ComputeCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Response__fini(command_server_pkg__srv__ComputeCommand_Response * msg);

/// Create srv/ComputeCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * command_server_pkg__srv__ComputeCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
command_server_pkg__srv__ComputeCommand_Response *
command_server_pkg__srv__ComputeCommand_Response__create();

/// Destroy srv/ComputeCommand message.
/**
 * It calls
 * command_server_pkg__srv__ComputeCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Response__destroy(command_server_pkg__srv__ComputeCommand_Response * msg);

/// Check for srv/ComputeCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Response__are_equal(const command_server_pkg__srv__ComputeCommand_Response * lhs, const command_server_pkg__srv__ComputeCommand_Response * rhs);

/// Copy a srv/ComputeCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Response__copy(
  const command_server_pkg__srv__ComputeCommand_Response * input,
  command_server_pkg__srv__ComputeCommand_Response * output);

/// Initialize array of srv/ComputeCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * command_server_pkg__srv__ComputeCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Response__Sequence__init(command_server_pkg__srv__ComputeCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/ComputeCommand messages.
/**
 * It calls
 * command_server_pkg__srv__ComputeCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Response__Sequence__fini(command_server_pkg__srv__ComputeCommand_Response__Sequence * array);

/// Create array of srv/ComputeCommand messages.
/**
 * It allocates the memory for the array and calls
 * command_server_pkg__srv__ComputeCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
command_server_pkg__srv__ComputeCommand_Response__Sequence *
command_server_pkg__srv__ComputeCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/ComputeCommand messages.
/**
 * It calls
 * command_server_pkg__srv__ComputeCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
void
command_server_pkg__srv__ComputeCommand_Response__Sequence__destroy(command_server_pkg__srv__ComputeCommand_Response__Sequence * array);

/// Check for srv/ComputeCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Response__Sequence__are_equal(const command_server_pkg__srv__ComputeCommand_Response__Sequence * lhs, const command_server_pkg__srv__ComputeCommand_Response__Sequence * rhs);

/// Copy an array of srv/ComputeCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_command_server_pkg
bool
command_server_pkg__srv__ComputeCommand_Response__Sequence__copy(
  const command_server_pkg__srv__ComputeCommand_Response__Sequence * input,
  command_server_pkg__srv__ComputeCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__FUNCTIONS_H_
