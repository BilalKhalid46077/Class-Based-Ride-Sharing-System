cmake_minimum_required(VERSION 4.1)
project(C___Proj)

set(CMAKE_CXX_STANDARD 20)

add_executable(C___Proj main.cpp
        RideClass.h
        StandardRide.h
        DriverClass.h)
