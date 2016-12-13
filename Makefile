CC = gcc -Werror -Wextra -Wall -g

SRCPATH = ./srcs

INCPATH = ./includes

LIBFTPATH = ./libft

HEADER = -I $(LIBFTPATH)/includes -I $(INCPATH)

LIB = -L$(LIBFTPATH) -lft
LIBNAME = $(LIBFTPATH)/libft.a

SRC = 	$(SRCPATH)/main.c\
        $(SRCPATH)/list_push_back.c\
        $(SRCPATH)/list_push_front.c\
        $(SRCPATH)/list_init.c\
        $(SRCPATH)/list_size.c\
        $(SRCPATH)/list_del.c\
        $(SRCPATH)/list_print.c\
        $(SRCPATH)/list_push_before_node.c\
        $(SRCPATH)/list_push_after_node.c\


OBJ = $(SRC:.c=.o)

NAME = linked_list

all: $(NAME)

$(NAME): $(LIBNAME) $(OBJ)
	@$(CC) -o $@ $(LIB) $^
	@echo "\n\033[39mCompilation done.\033[0m"

$(LIBNAME):
	@make -C $(LIBFTPATH) -j8

%.o: %.c
	@$(CC) -o $@ -c $< $(HEADER)
	@echo "\033[34m█\033[0m\c"

clean:
	@make -C $(LIBFTPATH) clean
	@rm -rf $(OBJ)

fclean: clean
	@make -C $(LIBFTPATH) fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re