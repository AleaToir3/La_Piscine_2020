/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:25:22 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 19:57:38 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(int **board)
{
	int i;
	int j;
	int print;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			print = board[i][j] + 48;
			write(1, &print, 1);
			if (j == 4)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}
