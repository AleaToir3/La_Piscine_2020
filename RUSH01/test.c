/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:18:20 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 20:01:49 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	x1checkline(int **board, int row)
{
	int i;
	int fint;
	int compt;
	int temp;

	i = 0;
	compt = 0;
	fint = 0;
	temp = board[row][i];
	while (i++ < 5)
	{
		if (fint < board[row][i])
		{
			fint = board[row][i];
			compt++;
		}
	}
	if (compt != temp)
		return (0);
	return (1);
}

int	x2checkline(int **board, int row)
{
	int i;
	int fint;
	int compt;
	int temp;

	i = 5;
	compt = 0;
	fint = 0;
	temp = board[row][i];
	while (i-- > 1)
	{
		if (fint < board[row][i])
		{
			fint = board[row][i];
			compt++;
		}
	}
	if (compt != temp)
		return (0);
	return (1);
}

int	y1checkline(int **board)
{
	int *stock;

	stock = 0;
	stock[0] = 1;
	stock[1] = 1;
	while ((stock[1]++) < 5)
	{
		stock[4] = board[0][stock[1]];
		while ((stock[0]++) < 5)
		{
			if (stock[2] < board[stock[0]][stock[1]])
			{
				stock[2] = board[stock[0]][stock[1]];
				stock[3]++;
			}
			if (board[stock[0]][stock[1]] == 0 && stock[2] < 4)
			{
				stock[3]++;
				stock[2] = stock[2]++;
			}
		}
		if (stock[3] != stock[4])
			return (0);
	}
	return (1);
}

int	checkdouble(int **board, int row)
{
	int x;
	int y;

	x = 1;
	while (x < 5)
	{
		y = 1;
		while (y < 5)
		{
			if ((board[y][x] == board[row][x]) && (y != row))
				return (0);
			y++;
		}
		x++;
	}
	return (0);
}

int	y2checkline(int **board)
{
	int *stock;

	stock = 0;
	stock[0] = 5;
	stock[1] = 1;
	while ((stock[1]++) < 5)
	{
		stock[4] = board[6][stock[1]];
		while ((stock[0]--) > 1)
		{
			if (stock[2] < board[stock[0]][stock[1]])
			{
				stock[2] = board[stock[0]][stock[1]];
				stock[3]++;
			}
			if (board[stock[0]][stock[1]] == 0 && stock[2] < 4)
			{
				stock[3]++;
				stock[2] = stock[2]++;
			}
		}
		if (stock[3] != stock[4])
			return (0);
	}
	return (1);
}
