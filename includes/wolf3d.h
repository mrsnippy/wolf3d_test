/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:29:31 by dmurovts          #+#    #+#             */
/*   Updated: 2017/03/30 16:04:26 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include "libft.h"
//# include <mlx.h>
# include <stdio.h>
# include <math.h>
# include <fcntl.h>

# define WIN_W 1920
# define WIN_H 1080

typedef struct 	s_mlx
{
	void	*init;
	void	*win;
	void	*img;
	int 	**map;	
}				t_mlx;

typedef struct	s_player
{
	double	posX;
	double	posY;
	double 	dirX;
	double	dirY;
	double	planeX;
	double	planeY;
	double	time;
	double	oTime;
}				t_player;

typedef struct	s_ray
{
	double cameraX;
	double rayPosX;
	double rayPosY;
	double rayDirX;
	double rayDirY;
}				t_ray;

typedef	struct 	s_dda
{
	int 	mapX;
	int 	mapY;
	double	sideDistX;
	double	sideDistY;
	double	deltaDistX;
	double	deltaDistY;
	double	perpWallDist;
	int		stepX;
	int		stepY;
	int		hit;
	int		side;
}				t_dda;

typedef	struct	s_map	 
{
	int **map;
	int deep;
	int size;
}				t_map;

typedef struct	s_pool
{
	t_mlx		*mlx;
	t_player	*player;
	t_ray		*ray;
	t_dda		*dda;
	t_map		*map;
}				t_pool;

void	ft_read(int ***imap);

#endif
