cmake_minimum_required(VERSION 3.20)
project(Glad)

if(UNIX AND NOT MINGW AND NOT APPLE)
	add_library(glad glad.c glad_glx.c)
else(UNIX AND NOT MINGW)
	add_library(glad glad.c)
endif()

target_include_directories(glad PUBLIC /)