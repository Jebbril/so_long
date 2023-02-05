/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:59:31 by orakib            #+#    #+#             */
/*   Updated: 2023/02/05 17:45:27 by orakib           ###   ########.fr       */
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
	while(str[ft_strlen(str) - 1] == '\n')
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
		printf("Error\n");
	printf("%s", str);
	split = ft_split(str, '\n');
	free(str);
	int i = -1;
	while (split[++i])
		printf("%s\n", split[i]);
}