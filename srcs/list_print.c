#include "list.h"

void	list_print(t_link *link, void (*print)(void *))
{
	t_link	*l;

	if (link == NULL)
		return ;
	l = link;
	while (l)
	{
		print(l);
		l = l->next;
	}
}