cmake_minimum_required(VERSION 3.10)
project(LangLang)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR})

# Add source files from subdirectories
file(GLOB_RECURSE LEXER_SOURCES "lexer/**/*.cpp")
file(GLOB_RECURSE UTIL_SOURCES "util/*.cpp")

# Create the executable with all source files
add_executable(lang_lang
    main.cpp
    ${LEXER_SOURCES}
    ${UTIL_SOURCES}
)
