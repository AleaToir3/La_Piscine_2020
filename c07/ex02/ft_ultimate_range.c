/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:33:49 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/24 15:50:14 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int lon;
	int *tab;
	int i;

	i = 0;
	lon = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * lon)))
		return (-1);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}
