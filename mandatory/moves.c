/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:55 by orakib            #+#    #+#             */
/*   Updated: 2023/02/16 15:56:33 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_var *v, mlx_instance_t pl)
{
	if (mlx_is_key_down(v->mlx, MLX_KEY_W)
		&& v->map[pl.y / 50 - 1][pl.x / 50] != '1')
	{
		v->pleftimg->instances[0].y -= 50;
		v->prightimg->instances[0].y -= 50;
		ft_printf("%d\n", ++v->moves);
	}
}

void	move_down(t_var *v, mlx_instance_t pl)
{
	if (mlx_is_key_down(v->mlx, MLX_KEY_S)
		&& v->map[pl.y / 50 + 1][pl.x / 50] != '1')
	{
		v->pleftimg->instances[0].y += 50;
		v->prightimg->instances[0].y += 50;
		ft_printf("%d\n", ++v->moves);
	}
}

void	move_left(t_var *v, mlx_instance_t pl)
{
	if (mlx_is_key_down(v->mlx, MLX_KEY_A)
		&& v->map[pl.y / 50][pl.x / 50 - 1] != '1')
	{
		v->pleftimg->instances[0].enabled = true;
		v->prightimg->instances[0].enabled = false;
		v->pleftimg->instances[0].x -= 50;
		v->prightimg->instances[0].x -= 50;
		ft_printf("%d\n", ++v->moves);
	}
}

void	move_right(t_var *v, mlx_instance_t pl)
{
	if (mlx_is_key_down(v->mlx, MLX_KEY_D)
		&& v->map[pl.y / 50][pl.x / 50 + 1] != '1')
	{
		v->pleftimg->instances[0].enabled = false;
		v->prightimg->instances[0].enabled = true;
		v->pleftimg->instances[0].x += 50;
		v->prightimg->instances[0].x += 50;
		ft_printf("%d\n", ++v->moves);
	}
}

void	eatnexit(t_var *v, mlx_instance_t pl)
{
	if (v->map[pl.y / 50][pl.x / 50] == 'E' && v->j == v->coincount)
		mlx_close_window(v->mlx);
	while (v->i < v->coincount)
	{
		if (pl.y == v->coinimg->instances[v->i].y
			&& pl.x == v->coinimg->instances[v->i].x
			&& v->coinimg->instances[v->i].enabled == true)
		{
			v->coinimg->instances[v->i].enabled = false;
			v->j++;
		}
		if (v->j == v->coincount)
		{
			v->exitcimg->instances[0].enabled = false;
			v->exitimg->instances[0].enabled = true;
		}
		v->i++;
	}
}
