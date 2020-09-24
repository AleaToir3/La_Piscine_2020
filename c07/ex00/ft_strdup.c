/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:48:55 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/21 15:16:19 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
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
