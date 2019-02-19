cmake_minimum_required(VERSION 3.10)
project(racing_car)

set(CMAKE_CXX_STANDARD 14)

if(OPT EQUAL "1")
    set(SOURCE_FILES src/RacingCar.cpp)
elseif(OPT EQUAL "2")
    set(SOURCE_FILES src/RacingCarFuncAdd.cpp)
elseif(OPT EQUAL "3")
    set(SOURCE_FILES src/RacingCarOuterFunc.cpp)
elseif(OPT EQUAL "4")
    src(SOURCE_FILES src/RacingCarClassBase.cpp)
endif()

add_executable(racing_car ${SOURCE_FILES})
