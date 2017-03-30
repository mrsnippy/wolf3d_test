/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:43:53 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/03 11:03:10 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	int		j;
	char	*res;

	j = 0;
	i = (size_t)start;
	if (!s)
		return (0);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	while (i < (start + len))
	{
		res[j] = ((char *)s)[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
