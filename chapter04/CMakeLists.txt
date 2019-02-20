cmake_minimum_required(VERSION 3.10)
project(rectangle)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(FINAL_NAME "rectangle")
set(SOURCE_FILES src/Point.h src/Point.cpp src/Rectangle.h src/Rectangle.cpp src/RectangleFaultFind.cpp)

add_executable(${FINAL_NAME} ${SOURCE_FILES})