/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:21:04 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/06 13:34:49 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *inp)
{
	int	i;
	int	flag;
	int	res;

	i = 0;
	flag = 1;
	res = 0;
	while (inp[i] && (inp[i] == ' ' || (inp[i] >= '\t' && inp[i] <= '\r')))
		i++;
	if (inp[i] == '+' || inp[i] == '-')
	{
		if (inp[i] == '-')
			flag = -1;
		i++;
	}
	while (ft_isdigit(inp[i]))
		res = (res * 10 + (inp[i++] - '0'));
	return (flag * res);
}
