/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:51:17 by orakib            #+#    #+#             */
/*   Updated: 2023/02/11 17:12:59 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**create_matrix(char **split)
{
	int		i;
	int		j;
	char	**m;

	i = 0;
	j = ft_strlen(split[i]);
	while (split[i])
		i++;
	m = malloc((i + 1) * sizeof(char *));
	if (!m)
		return (NULL);
	i = -1;
	while (split[++i])
	{
		m[i] = malloc((j + 1) * sizeof(char));
		if (!m[i])
			free_matrix(m);
		m[i][j] = '\0';
	}
	m[i] = 0;
	return (m);
}

void	fill_matrix(char **split, char **m)
{
	int	i;
	int	j;

	if (!m)
	{
		perror("Error\n");
		exit(errno);
	}
	i = -1;
	while (split[++i])
	{
		j = -1;
		while (split[i][++j])
			m[i][j] = '0';
	}
}

t_pos	get_pos(char **split, char c)
{
	t_pos	ret;
	int		i;
	int		j;

	i = -1;
	ret.x = 0;
	ret.y = 0;
	while (split[++i])
	{
		j = -1;
		while (split[i][++j])
		{
			if (split[i][j] == c)
			{
				ret.x = i;
				ret.y = j;
				return (ret);
			}
		}
	}
	return (ret);
}

int	check_path(char **split, char **m, int x, int y)
{
	t_pos	p;

	p = get_pos(split, 'P');
	if (x == p.x && y == p.y)
		return (1);
	if (split[x][y] == '1')
		return (0);
	if (m[x][y] == '1')
		return (0);
	m[x][y] = '1';
	if (check_path(split, m, x + 1, y))
		return (1);
	if (check_path(split, m, x - 1, y))
		return (1);
	if (check_path(split, m, x, y + 1))
		return (1);
	if (check_path(split, m, x, y - 1))
		return (1);
	m[x][y] = '0';
	return (0);
}

int	check_path2(char **split, char **m, int x, int y)
{
	t_pos	p;

	p = get_pos(split, 'P');
	if (x == p.x && y == p.y)
		return (1);
	if (split[x][y] == '1' || split[x][y] == 'E')
		return (0);
	if (m[x][y] == '1')
		return (0);
	m[x][y] = '1';
	if (check_path2(split, m, x + 1, y))
		return (1);
	if (check_path2(split, m, x - 1, y))
		return (1);
	if (check_path2(split, m, x, y + 1))
		return (1);
	if (check_path2(split, m, x, y - 1))
		return (1);
	m[x][y] = '0';
	return (0);
}
