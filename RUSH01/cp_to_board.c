/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cp_to_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:22:28 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 19:36:43 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*comb(int x);

void	comb2(int *val, int **tab);

void	cp_to_board(int **board, int y, int pos)
{
	int i;
	int j;
	int *tmp;

	tmp = comb(pos);
	i = 1;
	j = 0;
	while (i < 5)
	{
		board[y][i] = tmp[j];
		i++;
		j++;
	}
}
