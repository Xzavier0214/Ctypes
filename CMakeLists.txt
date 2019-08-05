cmake_minimum_required(VERSION 3.0.0)
project(adder VERSION 0.1.0)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib )

add_library(adder SHARED adder.cpp)
