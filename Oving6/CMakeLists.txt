cmake_minimum_required(VERSION 3.14)
project(Oving6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(main main.cpp)

add_executable(server server.cpp)

#find_package(Boost 1.71.0 COMPONENTS system REQUIRED)
#set(BOOST_INCLUDEDIR /usr/local/Cellar/boost/1.71.0)
#include_directories(${Boost_INCLUDE_DIR})
target_link_libraries(server ${Boost_LIBRARIES})