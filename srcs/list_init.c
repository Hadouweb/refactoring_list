#include "list.h"

void	list_init(t_lst **list, t_link *link)
{
	*list = (t_lst*)malloc(sizeof(t_lst));
	if (*list == NULL)
		return ;
	bzero(*list, sizeof(t_lst));
	(*list)->head = link;
	(*list)->tail = link;
	(*list)->size++;
}