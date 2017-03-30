/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:31:43 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/06 13:40:17 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (i <= (int)ft_strlen((char *)s))
	{
		if (s[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if (j >= 0)
		return ((char*)&s[j]);
	return (NULL);
}
