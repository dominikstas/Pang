cmake_minimum_required(VERSION 3.10)
project(Pang C)

set(CMAKE_C_STANDARD 17)

add_executable(Pang main.c simple/simple.c setup/setup.c setup/calc.c)

target_compile_options(Pang PRIVATE -Wall -Wextra)