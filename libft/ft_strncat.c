/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:17:52 by lmbangel          #+#    #+#             */
/*   Updated: 2018/05/26 12:18:33 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0' && n != 0)
	{
		dest[i] = src[k];
		i++;
		k++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
