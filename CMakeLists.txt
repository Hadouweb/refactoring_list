cmake_minimum_required(VERSION 3.5)
project(linked_list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(libft)
include_directories(libft/includes)
include_directories(includes)
add_subdirectory(libft)

set(HEADER_FILES
    includes/list.h
    libft/includes/libft.h
)

set(SOURCE_FILES
        srcs/main.c
        srcs/ft_list_push_back.c
        srcs/ft_list_push_front.c
        srcs/ft_list_init.c
        srcs/ft_list_size.c
        srcs/ft_list_del.c
        srcs/ft_list_print.c
        srcs/ft_list_push_before_node.c
        srcs/ft_list_push_after_node.c
        srcs/ft_list_to_tab.c
        srcs/ft_list_str_split.c
    )
add_executable(linked_list ${SOURCE_FILES} ${HEADER_FILES})