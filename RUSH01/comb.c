/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 13:52:14 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 23:02:56 by ababaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	comb2(int *val, int **tab)
{
	if (val[0] != val[1] && val[1] != val[2] && val[2] != val[3] &&
			val[3] != val[0] && val[3] != val[1] && val[3] != val[0] &&
			val[0] != val[2])
	{
		tab[val[4]] = malloc(sizeof(int*) * 4);
		tab[val[4]][0] = val[0];
		tab[val[4]][1] = val[1];
		tab[val[4]][2] = val[2];
		tab[val[4]][3] = val[3];
		val[4]++;
	}
	if (val[4] == 24)
		val[3] = 5;
}

int		*comb(int x)
{
	int val[5];
	int **tab;

	tab = malloc(sizeof(int*) * 24);
	val[4] = 0;
	val[0] = 0;
	while (++val[0] <= 4)
	{
		val[1] = 0;
		while (++val[1] <= 4)
		{
			val[2] = 0;
			while (++val[2] <= 4)
			{
				val[3] = 0;
				while (++val[3] <= 4)
				{
					comb2(val, tab);
				}
			}
		}
	}
	return (tab[x]);
}
