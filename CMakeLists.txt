cmake_minimum_required(VERSION 3.27)
project(DSA_c_c_ C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(DSA_lab)

add_executable(DSA_c_c_
        DSA_lab/SearchAlgo.c)
