/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_str_split.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:00:36 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 05:00:38 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static int		ft_count_word(char const *s, char delimiter)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == delimiter)
		i++;
	if (s[i])
		count++;
	while (s[i])
	{
		if (s[i] == delimiter)
		{
			while (s[i] == delimiter)
				i++;
			if (s[i])
				count++;
		}
		i++;
	}
	return (count);
}

static int		ft_strlen_split(char const *s, char delimiter)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != delimiter)
		i++;
	return (i);
}

static char		*ft_subtab(char const *s, char delimiter)
{
	size_t	j;
	size_t	size_word;
	char	*str;

	j = 0;
	size_word = ft_strlen_split(s, delimiter);
	if ((str = (char *)ft_memalloc(size_word * sizeof(char) + 1)) == NULL)
		return (NULL);
	while (j < size_word)
		str[j++] = *s++;
	str[j] = '\0';
	return (str);
}

t_str_linked	*make_str_node(char *str)
{
	t_str_linked	*n;

	if ((n = (t_str_linked*)ft_memalloc(sizeof(t_str_linked))) == NULL)
		return (NULL);
	n->str = str;
	return (n);
}

t_lst			*ft_list_str_split(char const *s, char delimiter)
{
	size_t	nb_word;
	size_t	k;
	t_lst	*list;
	size_t	size;
	char	*tmp;

	k = 0;
	nb_word = ft_count_word(s, delimiter);
	list = NULL;
	while (nb_word--)
	{
		while (s[k] && s[k] == delimiter)
			k++;
		size = ft_strlen_split(&s[k], delimiter) + 1;
		tmp = ft_subtab(&s[k], delimiter);
		ft_list_push_back(&list, &make_str_node(tmp)->link);
		k += size;
	}
	return (list);
}
