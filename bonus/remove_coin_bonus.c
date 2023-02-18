/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_coin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:50:36 by orakib            #+#    #+#             */
/*   Updated: 2023/02/18 14:52:18 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	checkcoin(t_var *v)
{
	if (v->coinn1img->instances[v->i].enabled == true)
		return (1);
	if (v->coinn2img->instances[v->i].enabled == true)
		return (1);
	if (v->coinn3img->instances[v->i].enabled == true)
		return (1);
	if (v->coinn4img->instances[v->i].enabled == true)
		return (1);
	if (v->coinn5img->instances[v->i].enabled == true)
		return (1);
	if (v->coinn6img->instances[v->i].enabled == true)
		return (1);
	if (v->coinn7img->instances[v->i].enabled == true)
		return (1);
	if (v->coinn8img->instances[v->i].enabled == true)
		return (1);
	return (0);
}

void	disablecoin(t_var *v)
{
	v->coinn1img->instances[v->i].enabled = false;
	v->coinn2img->instances[v->i].enabled = false;
	v->coinn3img->instances[v->i].enabled = false;
	v->coinn4img->instances[v->i].enabled = false;
	v->coinn5img->instances[v->i].enabled = false;
	v->coinn6img->instances[v->i].enabled = false;
	v->coinn7img->instances[v->i].enabled = false;
	v->coinn8img->instances[v->i].enabled = false;
}
