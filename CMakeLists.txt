cmake_minimum_required(VERSION 3.24)
project(AT_Response_Parser C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(AT_Response_Parser
        include/at_resp_parser.h
        src/at_resp_parser.c
        src/main.c)
