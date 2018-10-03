/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:00:03 by lmbangel          #+#    #+#             */
/*   Updated: 2018/05/26 12:00:49 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = n;
	a = (char *)str1;
	b = (char *)str2;
	if (a < b)
	{
		return (ft_memcpy(a, b, n));
	}
	if (n == 0 || a == b)
	{
		return (a);
	}
	while (i--)
	{
		a[i] = b[i];
	}
	return (a);
}
