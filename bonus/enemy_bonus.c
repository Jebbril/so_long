/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:05:33 by orakib            #+#    #+#             */
/*   Updated: 2023/02/18 19:18:36 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	load_enm(t_var *v)
{
	v->enml1 = mlx_load_xpm42("xpm42/enml1.xpm42");
	if (!v->enml1)
		term_exit(v);
	v->enmr1 = mlx_load_xpm42("xpm42/enmr1.xpm42");
	if (!v->enmr1)
		term_exit(v);
}

void	put_enemies(t_var *v, int i, int j)
{
	mlx_image_to_window(v->mlx, v->enml1img, i, j);
	mlx_image_to_window(v->mlx, v->enmr1img, i, j);
	v->enml1img->instances[v->enmcount].enabled = false;
}

void	move_enemy2(t_var *v, int i)
{
	if (v->map[v->enml1img->instances[i].y / 50]
		[v->enml1img->instances[i].x / 50 - 1] != '1'
		&& v->enml1img->instances[i].enabled)
	{
		v->enmr1img->instances[i].x -= 5;
		v->enml1img->instances[i].x -= 5;
	}
	if (v->map[v->enml1img->instances[i].y / 50]
		[v->enml1img->instances[i].x / 50 - 1] == '1')
	{
		v->enmr1img->instances[i].enabled = true;
		v->enml1img->instances[i].enabled = false;
	}
	if (v->enmr1img->instances[i].x == v->pleftimg->instances[0].x
		&& v->enmr1img->instances[i].y == v->pleftimg->instances[0].y)
		mlx_close_window(v->mlx);
}

void	move_enemy(void *param)
{
	t_var	*v;
	int		i;

	v = param;
	i = -1;
	while (++i < v->enmcount)
	{
		if (v->map[v->enml1img->instances[i].y / 50]
			[v->enml1img->instances[i].x / 50 + 2] != '1'
			&& v->enmr1img->instances[i].enabled)
		{
			v->enmr1img->instances[i].x += 5;
			v->enml1img->instances[i].x += 5;
		}
		if (v->map[v->enml1img->instances[i].y / 50]
			[v->enml1img->instances[i].x / 50 + 2] == '1')
		{
			v->enmr1img->instances[i].enabled = false;
			v->enml1img->instances[i].enabled = true;
		}
		move_enemy2(v, i);
	}
}
