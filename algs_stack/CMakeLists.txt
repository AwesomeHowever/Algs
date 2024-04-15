cmake_minimum_required(VERSION 3.29.1)

project(test_stack_lib)

set(SOURCE_EXE test_of_stack_lib.cpp)

set(SOURCE_LIB algs_stack.cpp)

add_library(algs_stack STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main algs_stack)