/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:45:32 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/05 01:48:11 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*a;
	size_t	i;

	a = (char *)str;
	i = 0;
	while (i < n)
	{
		if (a[i] == (char)c)
		{
			return (&a[i]);
		}
		i++;
	}
	return (NULL);
}
