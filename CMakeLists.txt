cmake_minimum_required(VERSION 3.30)
project(TeachDSA)

set(CMAKE_CXX_STANDARD 20)

add_executable(TeachDSA main.cpp
)


add_executable(linkedlists LinkedLists/main.cpp LinkedLists/main.h)
add_executable(stacks Stacks/StacksUsingArrays.cpp Stacks/StacksUsingArrays.h)
add_executable(Queues Queues/QueuesUsingArrays.cpp Queues/QueuesUsingArrays.h
)
add_executable(stdStacks Stacks/stdStacks.cpp Stacks/stdStacks.h)
add_executable(stdQueues Queues/stdQueues.cpp Queues/stdQueues.h)
