/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 11:19:30 by dmurovts          #+#    #+#             */
/*   Updated: 2017/03/30 14:35:49 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_s(char *str)
{
	int	i;
	int l;

	i = -1;
	l = ft_strlen(str);
	while (++i < l)
	{
		if (str[i] == '\n' || str[i] == '\0')
			return (i);
	}
	return (-1);
}

void		ft_gnl(int *i, char **st, char **buf)
{
	char	*tmp;

	*i = find_s(*buf);
	tmp = *st;
	*st = !*st ? ft_strdup(*buf) : ft_strjoin(*st, *buf);
	free(*buf);
	free(tmp);
}

int			ft_gnl2(char **st, char **line, int k, int i)
{
	char	*tmp;

	*line = ft_strsub(*st, 0, i);
	k = (ft_strlen(*st) == 0 ? 1 : 0);
	tmp = *st;
	*st = ft_strsub(tmp, i + 1, (ft_strlen(*st) - (i + 1)));
	free(tmp);
	return (k);
}

int			get_next_line(const int fd, char **line)
{
	static char	*st[4864];
	char		*buf;
	int			i;
	int			eof;
	int			k;

	k = 0;
	if (fd < 0 || fd > 4864 || BUFF_SIZE < 1)
		return (-1);
	i = -1;
	while (i < 0)
	{
		buf = ft_strnew(BUFF_SIZE);
		if ((eof = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
		ft_gnl(&i, &st[fd], &buf);
		if (eof < BUFF_SIZE)
			break ;
	}
	i = find_s(st[fd]);
	if (i < 0 && eof < BUFF_SIZE)
		i = ft_strlen(st[fd]);
	k = ft_gnl2(&st[fd], line, k, i);
	return (ft_strlen(*line) == 0 && eof == 0 && k == 1) ? 0 : 1;
}
