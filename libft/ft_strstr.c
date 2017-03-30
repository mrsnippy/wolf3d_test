/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:43:12 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/06 13:48:29 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *lil)
{
	int i;
	int len;

	i = -1;
	if (!(len = ft_strlen((char *)lil)))
		return ((char *)big);
	while (big[++i])
		if (big[i] == lil[0] && !ft_strncmp(big + i, lil, len))
			return ((char *)big + i);
	return (NULL);
}
