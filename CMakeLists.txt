cmake_minimum_required(VERSION 3.8)

set(This First_CPP)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(googletest)

set(Headers
    main.hpp
)

set(Sources
    main.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)
