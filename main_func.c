/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:40:09 by orakib            #+#    #+#             */
/*   Updated: 2023/02/14 20:07:23 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	hook(mlx_key_data_t keydata, void *param)
{
	t_var			*v;
	mlx_instance_t	pl;
	mlx_instance_t	pr;

	v = param;
	v->i = 0;
	pl = v->pleftimg->instances[0];
	pr = v->prightimg->instances[0];
	if (mlx_is_key_down(v->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(v->mlx);
	if (keydata.key == MLX_KEY_W)
		move_up(v, pl, pr);
	else if (keydata.key == MLX_KEY_S)
		move_down(v, pl, pr);
	else if (keydata.key == MLX_KEY_A)
		move_left(v, pl, pr);
	else if (keydata.key == MLX_KEY_D)
		move_right(v, pl, pr);
	eatnexit(v, pl, pr);
}

void	put_player(t_var *var)
{
	t_pos	plyr;

	plyr = get_pos(var->map, 'P');
	var->plindex = mlx_image_to_window
		(var->mlx, var->pleftimg, plyr.y * 50, plyr.x * 50);
	var->prindex = mlx_image_to_window
		(var->mlx, var->prightimg, plyr.y * 50, plyr.x * 50);
	var->pleftimg->instances[0].enabled = false;
}

void	draw_map(t_var *var)
{
	int	i;
	int	j;

	i = -1;
	while (var->map[++i])
	{
		j = -1;
		while (var->map[i][++j])
		{
			var->findex = mlx_image_to_window
				(var->mlx, var->floorimg, j * 50, i * 50);
			if (var->map[i][j] == '1')
				var->windex = mlx_image_to_window
					(var->mlx, var->wallimg, j * 50, i * 50);
			if (var->map[i][j] == 'C')
			{
				var->coincount++;
				var->cindex = mlx_image_to_window
					(var->mlx, var->coinimg, j * 50, i * 50);
			}
			if (var->map[i][j] == 'E')
				var->eindex = mlx_image_to_window
					(var->mlx, var->exitimg, j * 50, i * 50);
		}
	}
}
