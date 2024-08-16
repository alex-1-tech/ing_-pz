cmake_minimum_required(VERSION 3.28)
project(ing_pz)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(ing_pz main.cpp
        first_task.h
        first_task.cpp
        )
