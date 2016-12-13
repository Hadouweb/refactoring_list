#ifndef LIST_H
# define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "libft.h"

typedef struct 		s_link
{
	struct s_link	*prev;
	struct s_link	*next;
}					t_link;

typedef struct		s_lst
{
	t_link			*head;
	t_link			*tail;
	unsigned long	size;
}					t_lst;

typedef struct 		s_str_linked
{
	t_link			link;
	void			*str;
}					t_str_linked;

typedef struct		s_data
{
	t_link			link;
	int 			nbr0;
	int 			nbr1;
	int 			nbr2;
	int 			nbr3;
	int 			nbr4;
	int 			nbr5;
	int 			nbr6;
	int 			nbr7;
	int 			nbr8;
	int 			nbr9;
	char 			*str;
}					t_data;

typedef struct		s_data_old
{
	int 			nbr0;
	int 			nbr1;
	int 			nbr2;
	int 			nbr3;
	int 			nbr4;
	int 			nbr5;
	int 			nbr6;
	int 			nbr7;
	int 			nbr8;
	int 			nbr9;
	char 			*str;
}					t_data_old;

void			ft_list_push_back(t_lst **list, t_link *data);
void			ft_list_push_front(t_lst **list, t_link *data);
void			ft_list_init(t_lst **list, t_link *link);
unsigned long	ft_list_size(t_lst *list);
void			ft_list_del(t_lst **list, void (*del)(void *));
void			ft_list_print(t_link *link, void (*print)(void *));
void			ft_list_push_before_node(t_lst **lst, t_link *node,
					t_link *new_node);
void			ft_list_push_after_node(t_lst **lst, t_link *node,
					t_link *new_node);
void			**ft_list_to_tab(t_lst *list);
t_lst			*ft_list_str_split(char const *s, char c);

#endif