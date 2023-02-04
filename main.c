/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:59:31 by orakib            #+#    #+#             */
/*   Updated: 2023/02/04 18:53:18 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*str;

	if (ac != 2)
		return (0);
	if (!check_ext(av[1]))
		return (0);
	fd = open(av[1], O_RDONLY);
	str = get_next_line(fd);
	while(str[ft_strlen(str) - 1] == '\n')
	{
		str = ft_strjoin2(str, get_next_line(fd));
	}
}