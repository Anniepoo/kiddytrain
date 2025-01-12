cmake_minimum_required(VERSION 3.31)
project(traingame)
add_executable(game main.cpp)
add_library(raylib STATIC raylib/raylib.h)
