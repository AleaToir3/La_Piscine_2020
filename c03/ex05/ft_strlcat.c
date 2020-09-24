/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:35:21 by ymiraoui          #+#    #+#             */
/*   Updated: 2020/09/14 16:57:07 by ymiraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int destlon;
	unsigned int srclon;

	i = 0;
	destlon = 0;
	srclon = 0;
	while (src[srclon])
		srclon++;
	while (dest[destlon])
		destlon++;
	if (size == 0)
		return (srclon);
	while (src[i] && destlon + i + 1 < size)
	{
		dest[destlon + i] = src[i];
		i++;
	}
	if (i < size)
		dest[destlon + i] = '\0';
	if (destlon > size)
		return (srclon + size);
	return (destlon + srclon);
}
