/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:04:58 by orakib            #+#    #+#             */
/*   Updated: 2023/02/17 14:27:20 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	free_matrix(char **matrice)
{
	int	i;

	i = 0;
	while (matrice[i])
	{
		free(matrice[i]);
		i++;
	}
	free(matrice);
}
