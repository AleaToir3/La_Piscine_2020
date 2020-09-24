/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:32:39 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/18 13:35:54 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char i;

	i = 'z';
	while ( i >= 'a' && i <= 'z')
	{
		write(1, &i, 1);
		i--;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
