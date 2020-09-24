/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:06:45 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/14 17:22:01 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int comp;

	if (size < 2)
	{
		return ;
	}
	comp = size - 1;
	while (comp >= 0)
	{
		n = comp;
		while (n >= 0)
		{
			if (((tab[comp] < tab[--n]) && (comp < size) && (n >= 0)))
			{
				ft_swap(&tab[comp], &tab[n]);
				comp++;
			}
		}
		comp--;
	}
}
