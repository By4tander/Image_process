cmake_minimum_required(VERSION 3.23)
project(image_process)

set(CMAKE_CXX_STANDARD 14)

#find_library(OpenCV)
find_package(OpenCV)
include_directories( ${OpenCV_INCLUDE_DIRS} )

#include_directories("/opt/homebrew/Cellar/opencv/4.6.0_1/include")

#link_directories("/opt/homebrew/Cellar/opencv/4.6.0_1/lib")

add_executable(image_process main.cpp)


target_link_libraries(image_process ${OpenCV_LIBS})
