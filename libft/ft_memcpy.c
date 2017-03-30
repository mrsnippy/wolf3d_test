/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 09:17:46 by dmurovts          #+#    #+#             */
/*   Updated: 2017/03/01 17:54:47 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < (unsigned int)n)
	{
		((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
