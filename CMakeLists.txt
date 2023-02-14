cmake_minimum_required(VERSION 3.12)

# options

project(platformer LANGUAGES CXX
	VERSION "0.1.0"
)

add_executable(${PROJECT_NAME}
	src/main.cpp
)

# compiling options:

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror -pedantic)

target_include_directories(${PROJECT_NAME} PRIVATE src)
