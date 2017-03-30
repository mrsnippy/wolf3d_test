/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 09:01:25 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/03 12:33:19 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (0);
	while (i < (size + 1))
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
