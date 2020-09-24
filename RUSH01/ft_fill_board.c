/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:46:20 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 21:31:24 by tscandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	full_zero(int **board)
{
	int y;
	int x;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			board[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	ft_fill_board(char *arg, int **board)
{
	int y;
	int x;
	int n;

	n = -1;
	y = 1;
	x = 1;
	full_zero(board);
	while (n++ < 16)
	{
		while (n / 4 == 0)
			board[0][x++] = *(arg + n++) - 48;
		x = 1;
		while (n / 4 == 1)
			board[5][x++] = *(arg + n++) - 48;
		while (n / 4 == 2)
			board[y++][0] = *(arg + n++) - 48;
		y = 1;
		while (n / 4 == 3)
			board[y++][5] = *(arg + n++) - 48;
	}
}
