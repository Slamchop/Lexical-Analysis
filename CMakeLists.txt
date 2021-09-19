cmake_minimum_required(VERSION 3.17)
project(125Proj)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(125Proj
        main.cpp cmake-build-debug/Lexer.h cmake-build-debug/Lexer.cpp)
