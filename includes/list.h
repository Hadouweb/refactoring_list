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

#endif