cmake_minimum_required(VERSION 3.24)
project(Cm)

set(CMAKE_CXX_STANDARD 20)

add_executable(Cm main.cpp tokenizer/Token.cpp tokenizer/Token.h)
