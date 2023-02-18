/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:39:00 by orakib            #+#    #+#             */
/*   Updated: 2023/02/18 15:00:05 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	check_ext(char *str)
{
	int	i;
	int	len;

	i = 1;
	len = ft_strlen(str);
	if (str[len - i])
		if (str[len - i] == 'r')
			i++;
	if (str[len - i])
		if (str[len - i] == 'e')
			i++;
	if (str[len - i])
		if (str[len - i] == 'b')
			i++;
	if (str[len - i])
		if (str[len - i] == '.')
			i++;
	if (i == 5 && i <= len)
		return (1);
	return (0);
}

void	check_excess(char *str)
{
	int		i;
	char	*elts;

	elts = "10PCE\n";
	if (str[0] == '\n' || str[ft_strlen(str) - 1] == '\n')
	{
		write(2, "Error\nNew line at begining or end of map", 41);
		free (str);
		exit(EXIT_FAILURE);
	}
	i = -1;
	while (str[++i])
	{
		if (!ft_strchr(elts, str[i]))
		{
			write(2, "Error\nUndifined map element(s)", 31);
			free (str);
			exit(EXIT_FAILURE);
		}
	}
}

int	backtrack2(char **split, char **sol)
{
	int	i;
	int	j;

	i = -1;
	while (split[++i])
	{
		j = -1;
		while (split[i][++j])
		{
			if (split[i][j] == 'C')
			{
				fill_matrix(split, sol);
				if (!(check_path(split, sol, i, j)))
					return (0);
			}
		}
	}
	return (1);
}

int	backtrack(char **split)
{
	char	**sol;
	t_pos	e;

	sol = create_matrix(split);
	fill_matrix(split, sol);
	e = get_pos(split, 'E');
	if (!(check_path(split, sol, e.x, e.y)))
	{
		free_matrix(sol);
		return (0);
	}
	if (!(backtrack2(split, sol)))
	{
		free_matrix(sol);
		return (0);
	}
	free_matrix(sol);
	return (1);
}
