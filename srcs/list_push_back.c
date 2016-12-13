#include "list.h"

void	list_push_back(t_lst **list, t_link *link)
{
	if (*list == NULL)
		list_init(list, link);
	else
	{
		(*list)->tail->next = link;
		link->prev = (*list)->tail;
		(*list)->tail = link;
		(*list)->size++;
	}
}