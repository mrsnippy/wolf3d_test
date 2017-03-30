/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:13:23 by dmurovts          #+#    #+#             */
/*   Updated: 2016/11/29 12:20:56 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (s < d)
	{
		d += (unsigned int)len;
		s += (unsigned int)len;
		while (len--)
		{
			*--d = *--s;
		}
	}
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
