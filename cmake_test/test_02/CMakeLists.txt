cmake_minimum_required(VERSION 2.8.9)
project(directory_test)

include_directories(include)
set(SRC src/GPS.cpp src/main.cpp)

add_executable(testGPS ${SRC})
