/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:00:24 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 05:00:25 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_push_front(t_lst **list, t_link *link)
{
	if (*list == NULL)
		ft_list_init(list, link);
	else
	{
		link->next = (*list)->head;
		(*list)->head = link;
		(*list)->size++;
	}
}
