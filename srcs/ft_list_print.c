/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 04:59:59 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 05:00:01 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_print(t_link *link, void (*print)(void *))
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
