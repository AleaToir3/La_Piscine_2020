/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:35:05 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/12 16:46:53 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < ' ') || (str[i] > '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
