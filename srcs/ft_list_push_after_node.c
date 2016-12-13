/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_after_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:00:03 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 05:00:04 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_push_after_node(t_lst **list, t_link *node, t_link *new_node)
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
