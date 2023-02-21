/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:34:52 by orakib            #+#    #+#             */
/*   Updated: 2023/02/21 18:45:11 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	delete1(t_var *var)
{
	mlx_delete_xpm42(var->coin);
	mlx_delete_image(var->mlx, var->coinimg);
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
}
