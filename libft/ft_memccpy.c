/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 11:54:32 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/04 15:49:15 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t bytes;

	bytes = 0;
	while (bytes < n)
	{
		*((unsigned char *)dest + bytes) = *((unsigned char *)src + bytes);
		if (*((unsigned char *)src + bytes) == (unsigned char)c)
			return ((unsigned char *)dest + bytes + 1);
		bytes++;
	}
	return (NULL);
}
