cmake_minimum_required(VERSION 3.7)
project(funnyApp)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c browerbook.h)
add_executable(funnyApp ${SOURCE_FILES} browerbook.c)