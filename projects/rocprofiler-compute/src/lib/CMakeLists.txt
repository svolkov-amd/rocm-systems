cmake_minimum_required(VERSION 3.28)
project(rocprofiler-compute-tool)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Set cmake_prefix_path for searching, ROCM_PATH if avail otherwise default to general rocm install path
set(CMAKE_PREFIX_PATH $ENV{ROCM_PATH} "/opt/rocm/")

find_package(
    rocprofiler-sdk
    HINTS $ENV{ROCM_PATH}/lib/cmake /opt/rocm/lib/cmake
    CONFIG
    REQUIRED
)

add_library(rocprofiler-compute-tool SHARED
    rocprofiler_compute_tool.cpp
    helper.hpp
    helper.cpp
    sdk_wrapper.h
    sdk_wrapper.cpp
)

target_link_libraries(rocprofiler-compute-tool PRIVATE rocprofiler-sdk::rocprofiler-sdk)
add_subdirectory(external)
add_subdirectory(test)
