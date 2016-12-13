/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:00:43 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 05:00:44 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	**ft_list_to_tab(t_lst *list)
{
	void	**tab;
	size_t	size;
	size_t	i;
	t_link	*l;

	size = ft_list_size(list);
	if ((tab = (void **)ft_memalloc((size + 1) * sizeof(void *))) == NULL)
		return (NULL);
	i = 0;
	l = list->head;
	while (i < size && l)
	{
		tab[i] = l;
		l = l->next;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
