/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:11:13 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/06 12:55:22 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (1);
	else
		return (0);
}

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = ft_strlen(dst);
	l = i;
	k = ft_strlen((char *)src);
	j = 0;
	if (i <= n)
	{
		while (i < (n - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (!ft_min(n, l) ? (n + k) : (l + k));
}
