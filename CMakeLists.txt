cmake_minimum_required(VERSION 3.23)
project(inc/pomodoro)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc libs/src)
add_executable(pomodoro main.cpp libs/src/Pomodoro.cpp inc/Pomodoro.h)
