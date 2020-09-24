/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:42:45 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/20 21:39:18 by tscandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_string(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (i % 2 == 1 && *(str + i) != ' ')
			return (0);
		if (i % 2 == 0 && (*(str + i) < '0' || *(str + i) > '9'))
			return (0);
		i++;
	}
	if (i == 31)
		return (1);
	return (0);
}
