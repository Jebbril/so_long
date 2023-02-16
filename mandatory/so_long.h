/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:07:38 by orakib            #+#    #+#             */
/*   Updated: 2023/02/16 17:49:55 by orakib           ###   ########.fr       */
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
# include "ft_printf/ft_printf.h"
# include "../MLX42/MLX42.h"

typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

typedef struct s_var
{
	mlx_t		*mlx;
	int			rows;
	int			cols;
	char		**map;
	xpm_t		*floor;
	xpm_t		*wall;
	xpm_t		*coin;
	xpm_t		*pleft;
	xpm_t		*pright;
	xpm_t		*exit;
	xpm_t		*exitc;
	mlx_image_t	*floorimg;
	mlx_image_t	*wallimg;
	mlx_image_t	*coinimg;
	mlx_image_t	*pleftimg;
	mlx_image_t	*prightimg;
	mlx_image_t	*exitimg;
	mlx_image_t	*exitcimg;
	int			coincount;
	int			i;
	int			j;
	int			windex;
	int			findex;
	int			cindex;
	int			eindex;
	int			plindex;
	int			prindex;
	int			moves;

}	t_var;

int		ft_strlen(char *s);
int		check_ext(char *str);
char	**ft_split(char *s, char c);
char	**map_parsing(int ac, char **av);
char	*ft_strchr(const char *s, int c);
void	pe_count(char *str);
void	c_count(char *str);
int		map_size(char **split);
void	map_closed(char **split);
void	free_matrix(char **matrice);
char	**create_matrix(char **split);
void	fill_matrix(char **split, char **m);
t_pos	get_pos(char **split, char c);
int		check_path(char **split, char **m, int x, int y);
int		check_path2(char **split, char **m, int x, int y);
int		backtrack(char **split);
void	checknl_between(char *str);
void	check_excess(char *str);
void	draw_map(t_var *var);
void	put_player(t_var *var);
void	hook(mlx_key_data_t keydata, void *param);
void	move_up(t_var *v, mlx_instance_t pl);
void	move_down(t_var *v, mlx_instance_t pl);
void	move_left(t_var *v, mlx_instance_t pl);
void	move_right(t_var *v, mlx_instance_t pl);
void	eatnexit(t_var *v, mlx_instance_t pl);
void	put_exitc(t_var *var);

#endif