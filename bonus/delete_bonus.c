/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:34:52 by orakib            #+#    #+#             */
/*   Updated: 2023/02/21 18:42:39 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	delete1(t_var *var)
{
	mlx_delete_xpm42(var->coin);
	mlx_delete_image(var->mlx, var->coinimg);
	mlx_delete_xpm42(var->coinn1);
	mlx_delete_image(var->mlx, var->coinn1img);
	mlx_delete_xpm42(var->coinn2);
	mlx_delete_image(var->mlx, var->coinn2img);
	mlx_delete_xpm42(var->coinn3);
	mlx_delete_image(var->mlx, var->coinn3img);
	mlx_delete_xpm42(var->coinn4);
	mlx_delete_image(var->mlx, var->coinn4img);
	mlx_delete_xpm42(var->coinn5);
	mlx_delete_image(var->mlx, var->coinn5img);
	mlx_delete_xpm42(var->coinn6);
	mlx_delete_image(var->mlx, var->coinn6img);
	mlx_delete_xpm42(var->coinn7);
	mlx_delete_image(var->mlx, var->coinn7img);
	mlx_delete_xpm42(var->coinn8);
	mlx_delete_image(var->mlx, var->coinn8img);
	mlx_delete_xpm42(var->wall);
	mlx_delete_image(var->mlx, var->wallimg);
}

void	delete2(t_var *var)
{
	delete1(var);
	mlx_delete_xpm42(var->floor);
	mlx_delete_image(var->mlx, var->floorimg);
	mlx_delete_xpm42(var->pleft);
	mlx_delete_image(var->mlx, var->pleftimg);
	mlx_delete_xpm42(var->pright);
	mlx_delete_image(var->mlx, var->prightimg);
	mlx_delete_xpm42(var->exit);
	mlx_delete_image(var->mlx, var->exitimg);
	mlx_delete_xpm42(var->exitc);
	mlx_delete_image(var->mlx, var->exitcimg);
	mlx_delete_xpm42(var->enml1);
	mlx_delete_image(var->mlx, var->enml1img);
	mlx_delete_xpm42(var->enmr1);
	mlx_delete_image(var->mlx, var->enmr1img);
}
