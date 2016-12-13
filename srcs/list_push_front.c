#include "list.h"

void	list_push_front(t_lst **list, t_link *link)
{
	if (*list == NULL)
		list_init(list, link);
	else
	{
		link->next = (*list)->head;
		(*list)->head = link;
		(*list)->size++;
	}
}