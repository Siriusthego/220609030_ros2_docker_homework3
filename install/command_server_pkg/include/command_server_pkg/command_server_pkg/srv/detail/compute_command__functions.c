// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from command_server_pkg:srv/ComputeCommand.idl
// generated code does not contain a copyright notice
#include "command_server_pkg/srv/detail/compute_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
command_server_pkg__srv__ComputeCommand_Request__init(command_server_pkg__srv__ComputeCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  return true;
}

void
command_server_pkg__srv__ComputeCommand_Request__fini(command_server_pkg__srv__ComputeCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
}

bool
command_server_pkg__srv__ComputeCommand_Request__are_equal(const command_server_pkg__srv__ComputeCommand_Request * lhs, const command_server_pkg__srv__ComputeCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (lhs->input != rhs->input) {
    return false;
  }
  return true;
}

bool
command_server_pkg__srv__ComputeCommand_Request__copy(
  const command_server_pkg__srv__ComputeCommand_Request * input,
  command_server_pkg__srv__ComputeCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  output->input = input->input;
  return true;
}

command_server_pkg__srv__ComputeCommand_Request *
command_server_pkg__srv__ComputeCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_server_pkg__srv__ComputeCommand_Request * msg = (command_server_pkg__srv__ComputeCommand_Request *)allocator.allocate(sizeof(command_server_pkg__srv__ComputeCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_server_pkg__srv__ComputeCommand_Request));
  bool success = command_server_pkg__srv__ComputeCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_server_pkg__srv__ComputeCommand_Request__destroy(command_server_pkg__srv__ComputeCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_server_pkg__srv__ComputeCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_server_pkg__srv__ComputeCommand_Request__Sequence__init(command_server_pkg__srv__ComputeCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_server_pkg__srv__ComputeCommand_Request * data = NULL;

  if (size) {
    data = (command_server_pkg__srv__ComputeCommand_Request *)allocator.zero_allocate(size, sizeof(command_server_pkg__srv__ComputeCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_server_pkg__srv__ComputeCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_server_pkg__srv__ComputeCommand_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
command_server_pkg__srv__ComputeCommand_Request__Sequence__fini(command_server_pkg__srv__ComputeCommand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      command_server_pkg__srv__ComputeCommand_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

command_server_pkg__srv__ComputeCommand_Request__Sequence *
command_server_pkg__srv__ComputeCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_server_pkg__srv__ComputeCommand_Request__Sequence * array = (command_server_pkg__srv__ComputeCommand_Request__Sequence *)allocator.allocate(sizeof(command_server_pkg__srv__ComputeCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_server_pkg__srv__ComputeCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_server_pkg__srv__ComputeCommand_Request__Sequence__destroy(command_server_pkg__srv__ComputeCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_server_pkg__srv__ComputeCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_server_pkg__srv__ComputeCommand_Request__Sequence__are_equal(const command_server_pkg__srv__ComputeCommand_Request__Sequence * lhs, const command_server_pkg__srv__ComputeCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_server_pkg__srv__ComputeCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_server_pkg__srv__ComputeCommand_Request__Sequence__copy(
  const command_server_pkg__srv__ComputeCommand_Request__Sequence * input,
  command_server_pkg__srv__ComputeCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_server_pkg__srv__ComputeCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_server_pkg__srv__ComputeCommand_Request * data =
      (command_server_pkg__srv__ComputeCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_server_pkg__srv__ComputeCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_server_pkg__srv__ComputeCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_server_pkg__srv__ComputeCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output`
#include "rosidl_runtime_c/string_functions.h"

bool
command_server_pkg__srv__ComputeCommand_Response__init(command_server_pkg__srv__ComputeCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__init(&msg->output)) {
    command_server_pkg__srv__ComputeCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
command_server_pkg__srv__ComputeCommand_Response__fini(command_server_pkg__srv__ComputeCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // output
  rosidl_runtime_c__String__fini(&msg->output);
}

bool
command_server_pkg__srv__ComputeCommand_Response__are_equal(const command_server_pkg__srv__ComputeCommand_Response * lhs, const command_server_pkg__srv__ComputeCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
command_server_pkg__srv__ComputeCommand_Response__copy(
  const command_server_pkg__srv__ComputeCommand_Response * input,
  command_server_pkg__srv__ComputeCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

command_server_pkg__srv__ComputeCommand_Response *
command_server_pkg__srv__ComputeCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_server_pkg__srv__ComputeCommand_Response * msg = (command_server_pkg__srv__ComputeCommand_Response *)allocator.allocate(sizeof(command_server_pkg__srv__ComputeCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_server_pkg__srv__ComputeCommand_Response));
  bool success = command_server_pkg__srv__ComputeCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_server_pkg__srv__ComputeCommand_Response__destroy(command_server_pkg__srv__ComputeCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_server_pkg__srv__ComputeCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_server_pkg__srv__ComputeCommand_Response__Sequence__init(command_server_pkg__srv__ComputeCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_server_pkg__srv__ComputeCommand_Response * data = NULL;

  if (size) {
    data = (command_server_pkg__srv__ComputeCommand_Response *)allocator.zero_allocate(size, sizeof(command_server_pkg__srv__ComputeCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_server_pkg__srv__ComputeCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_server_pkg__srv__ComputeCommand_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
command_server_pkg__srv__ComputeCommand_Response__Sequence__fini(command_server_pkg__srv__ComputeCommand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      command_server_pkg__srv__ComputeCommand_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

command_server_pkg__srv__ComputeCommand_Response__Sequence *
command_server_pkg__srv__ComputeCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_server_pkg__srv__ComputeCommand_Response__Sequence * array = (command_server_pkg__srv__ComputeCommand_Response__Sequence *)allocator.allocate(sizeof(command_server_pkg__srv__ComputeCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_server_pkg__srv__ComputeCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_server_pkg__srv__ComputeCommand_Response__Sequence__destroy(command_server_pkg__srv__ComputeCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_server_pkg__srv__ComputeCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_server_pkg__srv__ComputeCommand_Response__Sequence__are_equal(const command_server_pkg__srv__ComputeCommand_Response__Sequence * lhs, const command_server_pkg__srv__ComputeCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_server_pkg__srv__ComputeCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_server_pkg__srv__ComputeCommand_Response__Sequence__copy(
  const command_server_pkg__srv__ComputeCommand_Response__Sequence * input,
  command_server_pkg__srv__ComputeCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_server_pkg__srv__ComputeCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_server_pkg__srv__ComputeCommand_Response * data =
      (command_server_pkg__srv__ComputeCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_server_pkg__srv__ComputeCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_server_pkg__srv__ComputeCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_server_pkg__srv__ComputeCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
