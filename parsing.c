/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:38:54 by orakib            #+#    #+#             */
/*   Updated: 2023/02/12 13:52:10 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_fd(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		write (2, "Error\nWrong number of arguments\n", 33);
		exit(EXIT_FAILURE);
	}
	if (!check_ext(av[1]))
	{
		write (2, "Error\nWrong extension\n", 23);
		exit(EXIT_FAILURE);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error\n");
		exit(errno);
	}
	return (fd);
}

char	*maptostr(int fd)
{
	char	*str;
	char	*line;

	str = get_next_line(fd);
	if (!str)
	{
		perror("Error\n");
		exit (errno);
	}
	line = get_next_line(fd);
	while (line)
	{
		str = ft_strjoin2(str, line);
		free(line);
		line = get_next_line(fd);
	}
	return (str);
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

char	**split_checkrec(char *str)
{
	char	**split;
	int		i;

	i = -1;
	split = ft_split(str, '\n');
	if (!split)
	{
		perror("Error\nSplit failure");
		free(str);
		exit (errno);
	}
	while (split[++i + 1])
	{
		if (ft_strlen(split[i]) != ft_strlen(split[i + 1]))
		{
			write(2, "Error\nMap not rectangular", 26);
			i = -1;
			while (split[++i])
				free(split[i]);
			free(split);
			free(str);
			exit(EXIT_FAILURE);
		}
	}
	return (split);
}

void	checknl_between(char *str)
{
	int	i;

	i = -1;
	while (str[++i + 1])
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
		{
			write(2, "Error\nNew line inside map", 26);
			free(str);
			exit(EXIT_FAILURE);
		}
	}
}

char	**map_parsing(int ac, char **av)
{
	int		fd;
	char	*str;
	char	**split;

	fd = get_fd(ac, av);
	str = maptostr(fd);
	check_excess(str);
	checknl_between(str);
	pe_count(str);
	c_count(str);
	split = split_checkrec(str);
	free(str);
	map_size(split);
	map_closed(split);
	if (!backtrack(split))
	{
		write(2, "Error\nInvalid path", 19);
		exit(EXIT_FAILURE);
	}
	return (split);
}
