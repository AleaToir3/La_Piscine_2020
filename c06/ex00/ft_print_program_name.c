/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 10:14:51 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/18 14:09:01 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	write(1, str, n);
}

int		main(int argc, char **argv)
{
	if (argc != 0)
		ft_putstr(*argv);
	write(1, "\n", 1);
	return (0);
}
