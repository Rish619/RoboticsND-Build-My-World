cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(My_world)

add_definitions(-std=c++11)

find_package(gazebo	REQUIRED)


include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS	"${GAZEBO_CXX_FLAGS}")

add_library(welcome	SHARED Scripts/Welcome_to_world.cpp)
target_link_libraries(welcome ${GAZEBO_LIBRAIES})