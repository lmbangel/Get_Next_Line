/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:00:50 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/04 17:26:12 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		size;
	size_t		destlen;

	d = dest;
	s = src;
	size = n;
	while (size-- != 0 && *d != '\0')
		d++;
	destlen = d - dest;
	size = n - destlen;
	if (size == 0)
		return (destlen + (size_t)ft_strlen(s));
	while (*s != '\0')
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return (destlen + (s - src));
}
