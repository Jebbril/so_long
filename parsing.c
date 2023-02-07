/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:38:54 by orakib            #+#    #+#             */
/*   Updated: 2023/02/07 16:29:21 by orakib           ###   ########.fr       */
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

// char	*maptostr(fd)
// {
	
// }

void	map_parsing(int ac, char **av)
{
	int		fd;
	char	*str;
	char	*line;
	char	**split;

	fd = get_fd(ac, av);
	str = get_next_line(fd);
	while (str[ft_strlen(str) - 1] == '\n')
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		str = ft_strjoin2(str, line);
		free(line);
	}
	// if (str[0] == '\n' || str[ft_strlen(str) - 1] == '\n')
	// {
	// 	printf("Error\n");
	// 	exit(EXIT_FAILURE);
	// }
	printf("%s", str);
	// printf ("\n\n");
	split = ft_split(str, '\n');
	// free(str);
	int i = -1;
	while (split[++i + 1])
		if (ft_strlen(split[i]) != ft_strlen(split[i + 1]))
		{
			printf("Error\n");
			break ;
		}
	i = -1;
	while (str[++i])
		if (str[i] != '1' && str[i] != '0' && str[i] != 'P' &&
			str[i] != 'C' && str[i] != 'E' && str[i] != '\n')
		{
			printf("Error\n");
			break ;
		}
}