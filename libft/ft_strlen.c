/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 11:05:48 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/06 13:02:48 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *inp)
{
	size_t i;

	i = 0;
	while (inp[i] != '\0')
		i++;
	return (i);
}