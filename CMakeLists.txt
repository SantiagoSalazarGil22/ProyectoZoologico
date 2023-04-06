cmake_minimum_required(VERSION 3.24)
project(ProyectoZoologico)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProyectoZoologico main.cpp src/animal.cpp src/animal.h src/habitat.cpp src/habitat.h)
