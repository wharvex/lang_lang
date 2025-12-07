cmake_minimum_required(VERSION 3.10)
project(MyCMakeProject)

set(CMAKE_CXX_STANDARD 11) # or higher

# Add include directories
include_directories(${CMAKE_SOURCE_DIR})

# Add source files from subdirectories
file(GLOB_RECURSE LEXER_SOURCES "lexer/**/*.cpp")
file(GLOB_RECURSE UTIL_SOURCES "util/*.cpp")

# Create the executable with all source files
add_executable(my_program 
    main.cpp
    ${LEXER_SOURCES}
    ${UTIL_SOURCES}
)
