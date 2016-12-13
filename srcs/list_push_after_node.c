#include "list.h"

void	list_push_after_node(t_lst **list, t_link *node, t_link *new_node)
{
	t_link	*n_next;

	if (node == new_node)
		return ;
	if (node->next != NULL)
	{
		n_next = node->next;
		n_next->prev = new_node;
		new_node->prev = node;
		node->next = new_node;
		new_node->next = n_next;
	}
	else
	{
		new_node->prev = node;
		node->next = new_node;
		(*list)->tail = new_node;
	}
	(*list)->size++;
}