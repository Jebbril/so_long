/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:45:38 by orakib            #+#    #+#             */
/*   Updated: 2023/02/17 14:26:48 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	pe_count(char *str)
{
	int	player;
	int	exitt;
	int	i;

	player = 0;
	exitt = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == 'P')
			player++;
		if (str[i] == 'E')
			exitt++;
	}
	if (player != 1 || exitt != 1)
	{
		write(2, "Error\nWrong number of players or exits", 39);
		free(str);
		exit(EXIT_FAILURE);
	}
}

void	c_count(char *str)
{
	int	colect;
	int	i;

	colect = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == 'C')
			colect++;
	}
	if (colect < 1)
	{
		write(2, "Error\nWrong number of collectibles", 35);
		free(str);
		exit(EXIT_FAILURE);
	}
}

int	map_size(char **split)
{
	int	i;
	int	j;

	i = 0;
	while (split[i])
	{
		j = ft_strlen(split[i]);
		if (j < 3)
			break ;
		i++;
	}
	if (i < 3 || j < 3)
	{
		write(2, "Error\nMap too small to be correct", 34);
		exit(EXIT_FAILURE);
	}
	return (i);
}

void	map_closed(char **split)
{
	int	i;
	int	j;
	int	sizev;

	sizev = map_size(split);
	i = 0;
	j = -1;
	while (split[i][++j])
	{
		if (split[i][j] != '1' || split[sizev - 1][j] != '1')
		{
			write(2, "Error\nMap not closed", 21);
			exit(EXIT_FAILURE);
		}
	}
	while (split[++i + 1])
	{
		if (split[i][0] != '1' || split[i][ft_strlen(split[i]) - 1] != '1')
		{
			write(2, "Error\nMap not closed", 21);
			exit(EXIT_FAILURE);
		}
	}
}
