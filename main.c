/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:59:31 by orakib            #+#    #+#             */
/*   Updated: 2023/02/12 19:51:37 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	mlx_t	*mlx;
	char	**map;
	int		rows;
	int		cols;

	map = map_parsing(ac, av);
	cols = ft_strlen(map[0]);
	rows = 0;
	while (map[rows])
		rows++;
	mlx = mlx_init(cols * 50, rows * 50, "so_long", false);
	if (!mlx)
	{
		write(2, "Error\nMlx failed to initialize", 31);
		exit(EXIT_FAILURE);
	}
	xpm_t *xpm1 = mlx_load_xpm42("xpm42/floor.xpm42");
	mlx_image_t *img1 = mlx_texture_to_image(mlx, &xpm1->texture);
	int index = mlx_image_to_window(mlx, img1, 0, 0);
	mlx_loop(mlx);
	mlx_terminate(mlx);
}