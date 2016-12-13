#include "list.h"

void	list_push_before_node(t_lst **list, t_link *node, t_link *new_node)
{
	t_link	*n_prev;

	if (node == new_node)
		return ;
	if (node->prev != NULL)
	{
		n_prev = node->prev;
		n_prev->next = new_node;
		new_node->next = node;
		node->prev = new_node;
		new_node->prev = n_prev;
	}
	else
	{
		new_node->next = node;
		node->prev = new_node;
		(*list)->head = new_node;
	}
	(*list)->size++;
}