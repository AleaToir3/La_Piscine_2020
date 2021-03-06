/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:37:01 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 23:37:09 by ababaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		check_string(char *str);
void	ft_parse_arg(char *s1, char *str);
void	ft_fill_board(char *arg, int **board);
int		x1checkline(int **board, int row);
int		x2checkline(int **board, int row);
int		y1checkline(int **board, int y);
int		y2checkline(int **board, int y);
int		checkdouble(int **board, int row);
void	printing(int **board);
int		*comb(int x);
void	comb2(int *val, int **tab);
void	cp_to_board(int **board, int y, int pos);

int		ft_backtrack(int **board, int y, int pos)
{
	if (y > 4)
		return (1);
	if (y < 1)
		return (0);
	if (pos < 24)
	{
		cp_to_board(board, y, pos);
		if (x2checkline(board, y) && x1checkline(board, y) &&
				y1checkline(board, y) && y2checkline(board, y) &&
				checkdouble(board, y))
			ft_backtrack(board, (y + 1), pos = 0);
		else
			ft_backtrack(board, y, pos + 1);
	}
	ft_backtrack(board, y - 1, pos = 0);
	return (0);
}

int		main(int argc, char **argv)
{
	int		**board;
	char	arg[18];
	int		i;
	int		pos;

	pos = 0;
	if (argc != 2)
		write(1, "Error\n", 6);
	board = malloc(sizeof(int*) * 6);
	i = -1;
	while (i++ < 5)
		board[i] = malloc(sizeof(int) * 6);
	if (check_string(argv[1]) == 0 || argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_parse_arg(arg, argv[1]);
	ft_fill_board(arg, board);
	if (ft_backtrack(board, 1, pos) == 1)
		printing(board);
	return (0);
}
