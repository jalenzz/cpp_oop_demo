cmake_minimum_required(VERSION 3.15)
project(game)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

aux_source_directory(src DIR_SRCS)

add_executable(${PROJECT_NAME} ${DIR_SRCS})
