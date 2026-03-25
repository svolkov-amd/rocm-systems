cmake_minimum_required(VERSION 3.28)

project(test_rocprofiler_compute)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(target test_rocprofiler_compute)

find_package(
    rocprofiler-sdk
    HINTS $ENV{ROCM_PATH}/lib/cmake /opt/rocm/lib/cmake
    CONFIG
    REQUIRED
)

add_executable(${target}
    test_rocprofiler_compute_tool.cpp
    ../rocprofiler_compute_tool.cpp
    ../helper.hpp
    ../helper.cpp
)

target_link_libraries(${target} PRIVATE rocprofiler-sdk::rocprofiler-sdk)

