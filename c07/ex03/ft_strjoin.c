/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 13:54:08 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/24 16:20:57 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*put_together(int size, char **strs, char *sep, char *tab)
{
	int i;
	int j;
	int n;

	j = -1;
	n = 0;
	while (++j < size)
	{
		i = -1;
		while (strs[j][++i])
			tab[n++] = strs[j][i];
		if (j < size - 1)
		{
			i = -1;
			while (sep[++i])
				tab[n++] = sep[i];
		}
	}
	tab[n] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		j;
	int		lon;

	j = 0;
	lon = 0;
	while (j < size)
	{
		lon = lon + ft_strlen(strs[j]) + ft_strlen(sep) + 1;
		j++;
	}
	if (!(tab = malloc(sizeof(char) * lon)))
		return (NULL);
	if (size == 0)
		return (tab);
	tab = put_together(size, strs, sep, tab);
	return (tab);
}
