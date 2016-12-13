/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 04:59:49 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 04:59:50 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_del(t_lst **list, void (*del)(void *))
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
