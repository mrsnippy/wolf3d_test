/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 09:35:58 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/03 09:47:38 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*res;

	i = 0;
	if (s)
	{
		res = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
		if (!res)
			return (0);
		while (s[i] != '\0')
		{
			res[i] = f(((char *)s)[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (0);
}
