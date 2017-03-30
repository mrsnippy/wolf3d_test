/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:34:19 by dmurovts          #+#    #+#             */
/*   Updated: 2017/03/30 16:04:15 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		ft_exit(void *a)
{
	if (!a)
		exit(0);
	return (0);
}

int		ft_events(int keycode, t_mlx *mlx)
{
	if (keycode == 53 && mlx)
		exit(0);
	return (0);
}

void	ft_picasso(t_mlx *mlx)
{
	//mlx->init = mlx_init();
	//mlx->win = mlx_new_window(mlx->init, WIN_W, WIN_H, "wolf3d");
	//mlx->img = mlx_new_image(mlx->init, WIN_W, WIN_H);
	ft_read(&(mlx->map));
	//img to window
	//redraw hook
	//
	//sleep(20000);
	//mlx_key_hook(mlx->win, ft_events, mlx);
	
	//mlx_hook(mlx->win, 17, 0, ft_exit, NULL);
	//mlx_loop(mlx->init);
}

int		main(void)
{
	//t_ray		*ray;
	t_mlx		*mlx;
	//t_pool 		pool;

	mlx = (t_mlx *)malloc(sizeof(t_mlx));
	ft_picasso(mlx);
	return (0);
}
