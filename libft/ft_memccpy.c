/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 09:17:46 by dmurovts          #+#    #+#             */
/*   Updated: 2016/11/29 16:19:44 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	s;

	i = 0;
	while (n--)
	{
		s = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = s;
		i++;
		if (s == (unsigned char)c)
			return ((unsigned char *)&dst[i]);
	}
	return (NULL);
}
