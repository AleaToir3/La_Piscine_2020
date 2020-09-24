/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:41:21 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/24 16:21:44 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_a_separator(char *str, char *charset, int i)
{
	int n;

	n = 0;
	while (charset[n])
	{
		if (str[i] == charset[n])
			return (1);
		n++;
	}
	return (0);
}

int		count_wordlen(char *str, char *charset, int i)
{
	int n;

	n = 0;
	while (str[i])
	{
		if (is_a_separator(str, charset, i))
			return (n);
		n++;
		i++;
	}
	return (n);
}

int		count_words(char *str, char *charset)
{
	int n;
	int i;

	n = 0;
	i = 0;
	if (!(is_a_separator(str, charset, 0)))
		n = 1;
	while (str[i])
	{
		while (((is_a_separator(str, charset, i))) && str[i])
		{
			i++;
			if (!(is_a_separator(str, charset, i)) && str[i])
				n++;
		}
		i++;
	}
	return (n);
}

void	ft_strncpy(char *dest, char *src, int i, int n)
{
	int l;
	int temp;

	l = 0;
	temp = i;
	while ((src[i]) && (i < (temp + n)))
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	while (i < (temp + n))
	{
		dest[l] = '\0';
		l++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char *) * (count_words(str, charset) + 1))))
		return (0);
	while (i < count_words(str, charset) && str[j])
	{
		if (!(is_a_separator(str, charset, j)))
		{
			if (!(tab[i] = malloc(sizeof(char) *
							(count_wordlen(str, charset, j) + 1))))
				return (0);
			ft_strncpy(tab[i], str, j, count_wordlen(str, charset, j));
			tab[i][count_wordlen(str, charset, j)] = '\0';
			j = j + count_wordlen(str, charset, j);
			i++;
		}
		while (is_a_separator(str, charset, j))
			j++;
	}
	tab[i] = 0;
	return (tab);
}
