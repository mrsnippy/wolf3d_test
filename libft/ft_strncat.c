/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:11:13 by dmurovts          #+#    #+#             */
/*   Updated: 2016/11/29 16:34:48 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = ft_strlen(s1);
	j = -1;
	while (s2[++j] != '\0' && j < (unsigned int)n)
		s1[i + j] = s2[j];
	s1[i + j] = '\0';
	return (s1);
}
