#include "list.h"

unsigned long	list_size(t_lst *list)
{
	if (list)
		return (list->size);
	return (0);
}