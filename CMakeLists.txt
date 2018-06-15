cmake_minimum_required(VERSION 3.7)

add_compile_options(-std=c++11 -Wall -Wextra)

project(Rectangle)

add_executable(${PROJECT_NAME}
    "main.cpp"
    "rectangle.cpp")
