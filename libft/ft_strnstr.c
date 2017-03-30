/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:43:12 by dmurovts          #+#    #+#             */
/*   Updated: 2016/11/29 13:41:38 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	j = 0;
	if (!(len = ft_strlen((char *)lil)))
		return ((char *)big);
	while (i < (unsigned int)n)
	{
		if (big[i] == lil[j])
		{
			while ((i + j) < (unsigned int)n)
			{
				if (j == (len - 1))
					return ((char*)&big[i]);
				j++;
				if (big[i + j] != lil[j])
					break ;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
