/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:25:29 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/06 13:03:44 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int res;

	i = -1;
	res = 0;
	while (++i < ((int)ft_strlen((char *)s1) + 1) && !res)
		res = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (res);
}
