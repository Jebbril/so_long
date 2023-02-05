/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:39:00 by orakib            #+#    #+#             */
/*   Updated: 2023/02/05 16:39:00 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "so_long.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	check_ext(char *str)
{
	int	i;
	int	len;

	i = 1;
	len = ft_strlen(str);
	if (str[len - i])
		if (str[len - i] == 'r')
			i++;
	if (str[len - i])
		if (str[len - i] == 'e')
			i++;
	if (str[len - i])
		if (str[len - i] == 'b')
			i++;
	if (str[len - i])
		if (str[len - i] == '.')
			i++;
	if (i == 5 && i <= len)
		return (1);
	return (0);
}
