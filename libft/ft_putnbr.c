/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:38:13 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/10 11:31:15 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_intlen(long n)
{
	long		i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static long	ft_dec_lol(long a, long b)
{
	long		i;
	long		res;

	i = 0;
	res = 1;
	if (b == 0)
		return (res);
	while (++i <= b)
		res *= a;
	return (res);
}

static void	ft_sitoa(long n, long i)
{
	char	c;

	if (n < 0)
		ft_putchar('-');
	while ((i - 1) >= 0)
	{
		if (n > 0)
			c = (n / ft_dec_lol(10, (i - 1))) % 10 + '0';
		else
			c = '0' - (n / ft_dec_lol(10, (i - 1))) % 10;
		i--;
		ft_putchar(c);
	}
}

void		ft_putnbr(int n)
{
	ft_sitoa((long)n, ft_intlen(n));
}
