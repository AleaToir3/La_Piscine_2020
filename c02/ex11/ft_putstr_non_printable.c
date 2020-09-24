/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:10:28 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/14 11:03:21 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*base;
	int				i;
	unsigned char	*s;
	int				diviseur;
	int				reste;

	i = 0;
	s = (unsigned char *)str;
	base = "0123456789abcdef";
	while (s[i])
	{
		if (s[i] < 32 || s[i] > 126)
		{
			diviseur = s[i] / 16;
			reste = s[i] % 16;
			write(1, "\\", 1);
			write(1, &base[diviseur], 1);
			write(1, &base[reste], 1);
		}
		else
			write(1, &s[i], 1);
		i++;
	}
}
