/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 15:32:52 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/10 11:59:38 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int res;

	i = -1;
	res = 0;
	while (++i < (int)n && s1[i] && !res)
		res = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	if (!res && i != (int)n)
		res = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (res);
}
