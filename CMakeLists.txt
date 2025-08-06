cmake_minimum_required(VERSION 3.30)
project(TeachDSA)

set(CMAKE_CXX_STANDARD 20)

add_executable(TeachDSA main.cpp
)


add_executable(linkedlists LinkedLists/main.cpp LinkedLists/main.h)
add_executable(stacks Stacks/StacksUsingArrays.cpp Stacks/StacksUsingArrays.h)
