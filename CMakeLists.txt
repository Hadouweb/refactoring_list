cmake_minimum_required(VERSION 3.5)
project(linked_list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(includes)
add_subdirectory(libft)

set(HEADER_FILES
    includes/list.h
)

set(SOURCE_FILES
        srcs/main.c
    )
add_executable(linked_list ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(linked_list ft)