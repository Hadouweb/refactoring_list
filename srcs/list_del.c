#include "list.h"

void	list_del(t_lst **list, void (*del)(void *))
{
	t_link	*l;
	t_link	*tmp;

	if (*list == NULL)
		return ;
	l = (*list)->head;
	while (l)
	{
		tmp = l;
		l = l->next;
		del(tmp);
	}
	free(*list);
	*list = NULL;
}