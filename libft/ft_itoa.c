/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 08:30:43 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/05 11:24:28 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_dec_lol(int a, int b)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (b == 0)
		return (res);
	while (++i <= b)
		res *= a;
	return (res);
}

static char	*ft_sitoa(char *res, int n, int i, int k)
{
	int j;

	j = 0;
	if (n < 0)
	{
		res[j] = '-';
		j++;
		k++;
	}
	while ((i - k) >= 0)
	{
		if (n > 0)
			res[j] = (n / ft_dec_lol(10, (i - k))) % 10 + '0';
		else
			res[j] = '0' - (n / ft_dec_lol(10, (i - k))) % 10;
		j++;
		i--;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	j = 0;
	k = 1;
	i = ft_intlen(n);
	(n <= 0) ? i++ : i;
	if (!(res = ft_strnew((size_t)i)))
		return (0);
	if (n == 0)
	{
		res[j] = '0';
		return (res);
	}
	return (ft_sitoa(res, n, i, k));
}
