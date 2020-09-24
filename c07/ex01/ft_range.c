/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:24:50 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/21 15:18:27 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int lon;
	int *tab;
	int i;

	i = 0;
	lon = max - min;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	if (!(tab = malloc(sizeof(int) * lon)))
		return (NULL);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
