cmake_minimum_required(VERSION 3.7)

project(DemoProject C CXX)

if(${CMAKE_GENERATOR} STREQUAL  "MinGW Makefiles")
    set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
endif()

add_subdirectory(hello_world)
add_subdirectory(libs)
add_subdirectory(unit_tests)