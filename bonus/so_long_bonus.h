/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:07:38 by orakib            #+#    #+#             */
/*   Updated: 2023/02/18 18:21:50 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H

# define SO_LONG_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include <errno.h>
# include "gnl/get_next_line.h"
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
	mlx_image_t	*string;
	int			sindex;
	xpm_t		*enml1;
	mlx_image_t	*enml1img;
	xpm_t		*enmr1;
	mlx_image_t	*enmr1img;
	xpm_t		*coinn1;
	xpm_t		*coinn2;
	xpm_t		*coinn3;
	xpm_t		*coinn4;
	xpm_t		*coinn5;
	xpm_t		*coinn6;
	xpm_t		*coinn7;
	xpm_t		*coinn8;
	mlx_image_t	*coinn1img;
	mlx_image_t	*coinn2img;
	mlx_image_t	*coinn3img;
	mlx_image_t	*coinn4img;
	mlx_image_t	*coinn5img;
	mlx_image_t	*coinn6img;
	mlx_image_t	*coinn7img;
	mlx_image_t	*coinn8img;
	int			enmcount;

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
char	*ft_itoa(int n);
void	load_coinxpm(t_var *var);
void	coin_texture(t_var *var);
void	drawcoin(t_var *v, int i, int j);
void	term_exit(t_var *var);
void	coin_anim(void *param);
void	disablecoin(t_var *v);
int		checkcoin(t_var *v);
void	load_enm(t_var *v);
void	put_enemies(t_var *v, int i, int j);
void	move_enemy(void *param);

#endif