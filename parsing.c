/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:38:54 by orakib            #+#    #+#             */
/*   Updated: 2023/02/11 17:07:55 by orakib           ###   ########.fr       */
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

void	map_parsing(int ac, char **av)
{
	int		fd;
	char	*str;
	char	**split;
	char	**sol;

	fd = get_fd(ac, av);
	str = maptostr(fd);
	check_excess(str);
	pe_count(str);
	c_count(str);
	split = split_checkrec(str);
	map_size(split);
	map_closed(split);
	sol = create_matrix(split);
	fill_matrix(split, sol);
	free(str);
	int i = -1;
	while (split[++i])
		printf("%s\n", split[i]);
	printf("\n\n");
	t_pos e = get_pos(split, 'E');
	printf("e path : %d\n", check_path(split, sol, e.x, e.y));
	i = -1;
	while (sol[++i])
		printf("%s\n", sol[i]);
	fill_matrix(split, sol);
	i = -1;
	int	j = -1;
	while (split[++i])
	{
		j = -1;
		while (split[i][++j])
		{
			if (split[i][j] == 'C')
			{
				fill_matrix(split, sol);
				printf("c path : %d\n", check_path2(split, sol, i, j));
				break;
			}
		}
	}
	// t_pos col = get_pos(split, 'C');
	// printf("c path : %d\n", check_path2(split, sol, col.x, col.y));
	free_matrix(split);
	free_matrix(sol);
}
