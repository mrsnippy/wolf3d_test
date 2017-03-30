/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:43:26 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/03 08:50:34 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;
	size_t	i;

	i = 0;
	ret = malloc(size);
	if (!ret)
		return (0);
	while (i < size)
	{
		((unsigned char *)ret)[i] = '\0';
		i++;
	}
	return (ret);
}
