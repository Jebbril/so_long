/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:59:31 by orakib            #+#    #+#             */
/*   Updated: 2023/02/16 18:14:43 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	term_exit(t_var *var)
{
	mlx_terminate(var->mlx);
	free_matrix(var->map);
	write(2, "Error\nMlx failed", 17);
}

void	init_window(t_var *var)
{
	var->cols = ft_strlen(var->map[0]);
	var->rows = 0;
	while (var->map[var->rows])
		var->rows++;
	var->mlx = mlx_init(var->cols * 50, var->rows * 50, "so_long", false);
	if (!var->mlx)
	{
		write(2, "Error\nMlx failed to initialize", 31);
		free_matrix(var->map);
		exit(EXIT_FAILURE);
	}
}

void	load_xpm(t_var *var)
{
	var->floor = mlx_load_xpm42("xpm42/floor.xpm42");
	if (!var->floor)
		term_exit(var);
	var->wall = mlx_load_xpm42("xpm42/wall.xpm42");
	if (!var->wall)
		term_exit(var);
	var->coin = mlx_load_xpm42("xpm42/coin1.xpm42");
	if (!var->coin)
		term_exit(var);
	var->pleft = mlx_load_xpm42("xpm42/susleft.xpm42");
	if (!var->pleft)
		term_exit(var);
	var->pright = mlx_load_xpm42("xpm42/susright.xpm42");
	if (!var->pright)
		term_exit(var);
	var->exit = mlx_load_xpm42("xpm42/vent.xpm42");
	if (!var->exit)
		term_exit(var);
	var->exitc = mlx_load_xpm42("xpm42/ventc.xpm42");
	if (!var->exitc)
		term_exit(var);
}

void	texture_img(t_var *var)
{
	var->floorimg = mlx_texture_to_image(var->mlx, &var->floor->texture);
	var->wallimg = mlx_texture_to_image(var->mlx, &var->wall->texture);
	var->coinimg = mlx_texture_to_image(var->mlx, &var->coin->texture);
	var->pleftimg = mlx_texture_to_image(var->mlx, &var->pleft->texture);
	var->prightimg = mlx_texture_to_image(var->mlx, &var->pright->texture);
	var->exitimg = mlx_texture_to_image(var->mlx, &var->exit->texture);
	var->exitcimg = mlx_texture_to_image(var->mlx, &var->exitc->texture);
}

int	main(int ac, char **av)
{
	t_var	var;

	var.coincount = 0;
	var.j = 0;
	var.moves = 0;
	var.map = map_parsing(ac, av);
	init_window(&var);
	load_xpm(&var);
	texture_img(&var);
	draw_map(&var);
	put_exitc(&var);
	put_player(&var);
	var.string = mlx_put_string(var.mlx, "0", 15, 15);
	mlx_key_hook(var.mlx, &hook, &var);
	mlx_loop(var.mlx);
	mlx_terminate(var.mlx);
}
