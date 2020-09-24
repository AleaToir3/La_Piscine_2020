/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:43:08 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 17:15:35 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_parse_arg(char *s1, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(str + i))
	{
		if (i % 2 == 0)
		{
			*(s1 + j) = *(str + i);
			j++;
		}
		i++;
	}
	*(s1 + j) = '\0';
}
