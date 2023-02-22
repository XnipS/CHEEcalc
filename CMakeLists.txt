cmake_minimum_required(VERSION 3.5)

project(Coeus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CHEEcalc src/main.cpp src/transfer.cpp)

#message(STATUS "Adding PCHs")
#target_precompile_headers(Coeus PRIVATE include/pch.h)