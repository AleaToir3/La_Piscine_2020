/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 11:37:54 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/10 11:41:52 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_two_digits(int n)
{
	int m1;
	int m2;
	int c;

	c = 48;
	if (n < 10)
	{
		n = n + 48;
		write(1, &c, 1);
		write(1, &n, 1);
	}
	else
	{
		m1 = n / 10 + 48;
		m2 = n % 10 + 48;
		write(1, &m1, 1);
		write(1, &m2, 1);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_two_digits(a);
			write(1, " ", 1);
			print_two_digits(b);
			if (!((a == 98) && (b == 99)))
			{
				write(1, ", ", 2);
			}
			++b;
		}
		++a;
	}
}
