/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:25:57 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/23 09:41:11 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *base)
{
	int		n;

	n = 0;
	while (base[n])
		n++;
	return (n);
}

int			ft_check_base(char *base)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = ft_strlen(base);
	if (n < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		while (base[j])
		{
			j++;
			if (base[i] == base[j] && i != j)
				return (0);
		}
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		n;
	long	x;

	i = 0;
	n = ft_strlen(base);
	x = nbr;
	if (ft_check_base(base) == 1)
	{
		if (x < 0)
		{
			ft_putchar('-');
			x = -x;
		}
		if (x >= n)
		{
			ft_putnbr_base(x / n, base);
		}
		ft_putchar(*(base + (x % n)));
	}
}
