cmake_minimum_required(VERSION 3.5)
project(LearnUnix)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(../commons)

set(SOURCE_FILES main.c)
add_executable(ls ${SOURCE_FILES})