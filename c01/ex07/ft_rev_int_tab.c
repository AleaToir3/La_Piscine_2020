/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:22:32 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/10 17:17:25 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int count;

	if (size < 2)
	{
		return ;
	}
	count = 0;
	while (count < --size)
	{
		ft_swap(&tab[count++], &tab[size]);
	}
}
