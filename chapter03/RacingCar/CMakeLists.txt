cmake_minimum_required(VERSION 3.10)
project(racing_car)

set(CMAKE_CXX_STANDARD 14)

if(OPT EQUAL "1")
    set(SOURCE_FILES src/main.cpp)
elseif(OPT EQUAL "2")
    set(SOURCE_FILES src/main2.cpp)
endif()

add_executable(racing_car ${SOURCE_FILES})
