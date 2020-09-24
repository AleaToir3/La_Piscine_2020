/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:34:17 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/14 18:59:04 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		n = 0;
		while (str[i + n] == to_find[n])
		{
			if (!(to_find[n + 1]))
				return (&str[i]);
			n++;
		}
		i++;
	}
	return (0);
}
