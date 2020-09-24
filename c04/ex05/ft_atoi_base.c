/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:04:04 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/23 14:24:09 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

int	get_pos(char *str, char *base, int i)
{
	int n;

	n = 0;
	while (str[i] && base[n])
	{
		if (str[i] == base[n])
			break ;
		n++;
	}
	return (n);
}

int	change_nbr(char *str, char *base, int i, int signe)
{
	long int res;

	res = 0;
	while (base[get_pos(str, base, i)] == str[i] && str[i])
	{
		res *= ft_strlen(base);
		res += get_pos(str, base, i);
		i++;
	}
	signe = signe % 2;
	if (signe == 1)
		res *= -1;
	return ((int)res);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	signe;

	i = 0;
	signe = 0;
	if (!base)
		return (0);
	while (str[i])
	{
		if ((str[i] != ' ') && (!((str[i] >= 9) && (str[i] <= 13))))
		{
			while (str[i] == '-' || str[i] == '+')
			{
				if (str[i] == '-')
					signe++;
				i++;
			}
			if (base[get_pos(str, base, i)] == str[i])
				break ;
			else 
				return (0);
		}
		i++;
	}
	return (change_nbr(str, base, i, signe));
}

int	ft_atoi_base(char *str, char *base)
{
	long int nbr;
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[n] && n != i)
		{
			if (base[i] == base[n])
				return (0);
			n++;
		}
		n = 0;
		i++;
	}
	nbr = ft_atoi(str, base);
	return ((int)nbr);
}

#include <stdio.h>

int	main()
{
	printf("%i", ft_atoi_base("   ----2147483648", "0123456789abcdef"));;
}
