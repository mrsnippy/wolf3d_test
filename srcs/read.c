/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 10:57:50 by dmurovts          #+#    #+#             */
/*   Updated: 2017/03/30 16:03:50 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static	void		ft_free_char(char ***a, int deep)
{
	int i;

	i = -1;
	while (++i < deep + 1)
	{
		//printf("%s\n", (*a)[i]);
		free((*a)[i]);
	}
	//free(*a);
	//*a = NULL;
	//free(a);
}

static int			ft_lines(int fd, int *j)
{
	int		i;
	char	*tmp;
	int		gnl;

	i = 0;
	while ((gnl = get_next_line(fd, &tmp)))
	{
		if (gnl > 0)
		{
			*j = (i == 0) ? ft_strlen(tmp) : *j;
			i++;
		}
		else if (gnl < 0)
			return (-1);
		free(tmp);
	}
	free(tmp);
	close(fd);
	return (i);
}

static char			**ft_char_read(int deep, int k, int fd)
{
	int 	i;
	int 	gnl;
	char 	**map;

	i = -1;
	k = 0;
	map = (char **)malloc(sizeof(char *) * (deep + 1));
	while (++i < deep)
		gnl = get_next_line(fd, &map[i]);
	map[i] = NULL;
	close(fd);
	return (map);
}

static int			**ft_int_read(char **cmap, int deep, int size)
{
	int		**map;
	int		i;
	int		j;
	char 	*tmp;

	i = -1;
	map = (int **)malloc(sizeof(int *) * deep);
	while (++i < deep)
	{
		j = -1;
		map[i] = (int *)malloc(sizeof(int) * size);
		while (++j < size)
		{
			tmp = ft_strsub(cmap[i], j, 1);
			map[i][j] = ft_atoi(tmp);
			free(tmp);
		}
	}
	return (map);
}

void 	ft_read(int ***imap)
{
	int		deep;
	int		k;
	int		fd;
	char	**map;
	//int		**imap;



	if ((fd = open("labmap", O_RDONLY)) < 0)
			return ;
	deep = ft_lines(fd, &k);
	
	if ((fd = open("labmap", O_RDONLY)) < 0)
			return ;

	map = ft_char_read(deep, k, fd);
			printf("%s\n", map[0]);
			printf("%s\n", map[1]);
			printf("%s\n", map[2]);
			printf("%s\n", map[3]);
			printf("%s\n", map[4]);
			printf("%s\n", map[5]);
			printf("%s\n", map[6]);
			printf("%s\n", map[7]);
			printf("%s\n", map[8]);
			printf("%s\n", map[9]);
			printf("%s\n", map[10]);
			printf("char done\n");

	*imap = ft_int_read(map, deep, k);

	//free(map);
	
	ft_free_char(&map, deep);
	//sleep(20000);
	/*int i = -1;
	int j;
	while (++i < deep)
	{
		j = -1;
		while(++j < k)
			printf("%i", imap[i][j]);
		printf("\n");
	} */
	printf("p=%p\n", imap);
	sleep(20000);
	//return (imap);
}

