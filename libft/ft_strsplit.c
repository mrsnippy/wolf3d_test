/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:44:35 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/06 11:39:54 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_word_size(char *s, char c, int i)
{
	int	k;

	k = 0;
	while (s[i] != c && s[i])
	{
		k++;
		i++;
	}
	return (k);
}

static int	ft_cnt(char *s, char c)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			j++;
		i++;
	}
	return (j);
}

static int	ft_pro(char *s, char c, char ***res)
{
	if (!s)
		return (0);
	if (!(*res = (char **)malloc((ft_cnt((char *)s, c) + 1) * sizeof(char *))))
		return (0);
	return (1);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**res;
	int		size;
	int		i;
	int		j;

	size = 0;
	i = 0;
	j = 0;
	if (!ft_pro((char *)str, c, &res))
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			size = ft_word_size((char *)str, c, i);
			res[j] = ft_strsub(str, i, size);
			i += size;
			j++;
		}
		else
			i++;
	}
	res[j] = 0;
	return (res);
}
