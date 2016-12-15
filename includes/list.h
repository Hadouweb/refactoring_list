#ifndef LIST_H
# define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "libft.h"
#include <fcntl.h>

typedef struct		s_data
{
	t_tree			tree;
	t_link			link;
	int 			nbr;
	char 			*str;
}					t_data;

#endif