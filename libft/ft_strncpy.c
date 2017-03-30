/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 12:11:45 by dmurovts          #+#    #+#             */
/*   Updated: 2016/11/29 16:03:19 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	unsigned int i;

	i = -1;
	while (++i < (unsigned int)len)
	{
		dest[i] = src[i];
		if ((unsigned int)ft_strlen(src) < (unsigned int)len
			&& i >= (unsigned int)ft_strlen(src))
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
