cmake_minimum_required(VERSION 3.5)
project(linked_list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(libft)
include_directories(libft/includes)
include_directories(includes)

set(HEADER_FILES
    includes/list.h
    libft/includes/libft.h
)

set(SOURCE_FILES
        srcs/main.c
        srcs/list_push_back.c
        srcs/list_push_front.c
        srcs/list_init.c
        srcs/list_size.c
        srcs/list_del.c
        srcs/list_print.c
        srcs/list_push_before_node.c
        srcs/list_push_after_node.c
    )
add_executable(linked_list ${SOURCE_FILES} ${HEADER_FILES})