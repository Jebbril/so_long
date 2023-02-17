/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_coin_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:15:18 by orakib            #+#    #+#             */
/*   Updated: 2023/02/17 19:19:00 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	load_coinxpm(t_var *var)
{
	var->coinn1 = mlx_load_xpm42("xpm42/coin1.xpm42");
	if (!var->coinn1)
		term_exit(var);
	var->coinn2 = mlx_load_xpm42("xpm42/coin2.xpm42");
	if (!var->coinn2)
		term_exit(var);
	var->coinn3 = mlx_load_xpm42("xpm42/coin3.xpm42");
	if (!var->coinn3)
		term_exit(var);
	var->coinn4 = mlx_load_xpm42("xpm42/coin4.xpm42");
	if (!var->coinn4)
		term_exit(var);
	var->coinn5 = mlx_load_xpm42("xpm42/coin5.xpm42");
	if (!var->coinn5)
		term_exit(var);
	var->coinn6 = mlx_load_xpm42("xpm42/coin6.xpm42");
	if (!var->coinn6)
		term_exit(var);
	var->coinn7 = mlx_load_xpm42("xpm42/coin7.xpm42");
	if (!var->coinn7)
		term_exit(var);
	var->coinn8 = mlx_load_xpm42("xpm42/coin8.xpm42");
	if (!var->coinn8)
		term_exit(var);
}

void	coin_texture(t_var *var)
{
	var->coinn1img = mlx_texture_to_image(var->mlx, &var->coinn1->texture);
	var->coinn2img = mlx_texture_to_image(var->mlx, &var->coinn2->texture);
	var->coinn3img = mlx_texture_to_image(var->mlx, &var->coinn3->texture);
	var->coinn4img = mlx_texture_to_image(var->mlx, &var->coinn4->texture);
	var->coinn5img = mlx_texture_to_image(var->mlx, &var->coinn5->texture);
	var->coinn6img = mlx_texture_to_image(var->mlx, &var->coinn6->texture);
	var->coinn7img = mlx_texture_to_image(var->mlx, &var->coinn7->texture);
	var->coinn8img = mlx_texture_to_image(var->mlx, &var->coinn8->texture);
}

void	drawcoin(t_var *v, int i, int j)
{
	mlx_image_to_window(v->mlx, v->coinn1img, i, j);
	mlx_image_to_window(v->mlx, v->coinn2img, i, j);
	mlx_image_to_window(v->mlx, v->coinn3img, i, j);
	mlx_image_to_window(v->mlx, v->coinn4img, i, j);
	mlx_image_to_window(v->mlx, v->coinn5img, i, j);
	mlx_image_to_window(v->mlx, v->coinn6img, i, j);
	mlx_image_to_window(v->mlx, v->coinn7img, i, j);
	mlx_image_to_window(v->mlx, v->coinn8img, i, j);
	v->coinn2img->instances[0].enabled = false;
	v->coinn3img->instances[0].enabled = false;
	v->coinn4img->instances[0].enabled = false;
	v->coinn5img->instances[0].enabled = false;
	v->coinn6img->instances[0].enabled = false;
	v->coinn7img->instances[0].enabled = false;
	v->coinn8img->instances[0].enabled = false;
}
