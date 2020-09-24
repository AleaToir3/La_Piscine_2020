/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:30:47 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/22 16:59:36 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	int		srclon;
	int		i;

	i = 0;
	srclon = 0;
	if (src == NULL)
		return (NULL);
	while (src[srclon])
		srclon++;
	if (!(copy = malloc(sizeof(char) * srclon + 1)))
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			lon;
	int			i;
	t_stock_str	*tab;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		lon = ft_strlen(av[i]);
		if (!(tab[i].str = malloc(sizeof(t_stock_str) *
						ft_strlen(av[i]) + 1)))
			return (NULL);
		if (!(tab[i].copy = malloc(sizeof(t_stock_str) *
						ft_strlen(av[i]) + 1)))
			return (NULL);
		tab[i].size = lon;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
