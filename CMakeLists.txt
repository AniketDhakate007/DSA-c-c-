cmake_minimum_required(VERSION 3.27)
project(DSA_c_c_ C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Algorithms)

add_executable(DSA_c_c_
        Algorithms/SearchAlgo/BinarySearch.c)
