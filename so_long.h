/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:07:38 by orakib            #+#    #+#             */
/*   Updated: 2023/02/09 18:48:13 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include <errno.h>
# include "gnl/get_next_line.h"
# include "MLX42/MLX42.h"

typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

int		ft_strlen(char *s);
int		check_ext(char *str);
char	**ft_split(char *s, char c);
void	map_parsing(int ac, char **av);
char	*ft_strchr(const char *s, int c);
void	pe_count(char *str);
void	c_count(char *str);
int		map_size(char **split);
void	map_closed(char **split);
void	free_matrix(char **matrice);

#endif