/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:50:01 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/16 15:41:11 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	change_nbr(char *str, int i, int signe)
{
	int res;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	signe = signe % 2;
	if (signe == 1)
		res *= -1;
	return (res);
}

int	ft_atoi(char *str)
{
	int i;
	int signe;

	i = 0;
	signe = 0;
	while (str[i])
	{
		while ((str[i] != ' ') && (!((str[i] >= 9) && (str[i] <= 13))))
		{
			while (str[i] == '-' || str[i] == '+' || str[i] == '0')
			{
				if (str[i] == '-')
					signe++;
				i++;
			}
			if (str[i] >= '0' && str[i] <= '9')
			{
				return (change_nbr(str, i, signe));
			}
			else
				return (0);
		}
		i++;
	}
	return (0);
}
