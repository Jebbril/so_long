/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:38:54 by orakib            #+#    #+#             */
/*   Updated: 2023/02/06 16:09:50 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*str;
	char	*line;
	char	**split;

	if (ac != 2)
		return (0);
	if (!check_ext(av[1]))
		return (0);
	fd = open(av[1], O_RDONLY);
	str = get_next_line(fd);
	if (!str)
		return (0);
	while (str[ft_strlen(str) - 1] == '\n')
	{
		line = get_next_line(fd);
		if (!line)
		{
			str = ft_strjoin2(str, "\n");
			break ;
		}
		str = ft_strjoin2(str, line);
		free(line);
	}
	if (str[0] == '\n' || str[ft_strlen(str) - 1] == '\n')
	{
		printf("Error\n");
		return (0);
	}
	printf("%s", str);
	printf ("\n\n");
	split = ft_split(str, '\n');
	// free(str);
	int i = -1;
	while (split[++i])
		printf("%s\n", split[i]);
	i = -1;
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