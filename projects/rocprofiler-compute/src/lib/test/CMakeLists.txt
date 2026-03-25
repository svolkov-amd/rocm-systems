cmake_minimum_required(VERSION 3.28)

project(test_rocprofiler_compute)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(test_rocprofiler_compute_tool
    test_rocprofiler_compute_tool.cpp
    ../rocprofiler_compute_tool.cpp
    ../helper.hpp
    ../helper.cpp
)
