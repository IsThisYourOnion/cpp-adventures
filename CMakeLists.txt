cmake_minimum_required(VERSION 3.25)
project(cpp_adventures)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(gameDevelopment)
include_directories(gettingStarted)

add_executable(cpp_adventures
        gettingStarted/helloWorld.cpp gettingStarted/playingWithFunctions.cpp gettingStarted/loops.cpp gettingStarted/aliasing.cpp gettingStarted/arrayPlay.cpp)
