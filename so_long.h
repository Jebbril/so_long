/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:07:38 by orakib            #+#    #+#             */
/*   Updated: 2023/02/05 18:50:58 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include "gnl/get_next_line.h"
# include "MLX42/MLX42.h"

int		ft_strlen(char *s);
int		check_ext(char *str);
char	**ft_split(char *s, char c);

#endif