/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 11:29:45 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/03 14:20:49 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_green(char c)
{
	if (c != ' ' && c != '\n' && c != '\t')
		return (1);
	else
		return (0);
}

static int	ft_calc(char *s, size_t *sj, size_t *ej)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (s[i] && !ft_is_green(s[i]))
		i++;
	*sj = i;
	i = 0;
	len = (size_t)ft_strlen(s) - 1;
	while (!ft_is_green(s[len - i]) && (len - i) > *sj)
		i++;
	*ej = len - i;
	return (*ej - *sj + 1);
}

char		*ft_strtrim(char const *s)
{
	char	*out;
	int		len;
	size_t	sj;
	size_t	ej;

	if (!s)
		return (NULL);
	len = ft_calc((char *)s, &sj, &ej);
	out = ft_strsub(s, sj, len);
	return (out);
}
