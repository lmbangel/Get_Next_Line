/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:21:39 by lmbangel          #+#    #+#             */
/*   Updated: 2018/05/30 22:55:47 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *haystack, int needle)
{
	int i;

	i = ft_strlen(haystack);
	while (i >= 0)
	{
		if (haystack[i] == needle)
		{
			return ((char *)&haystack[i]);
		}
		i--;
	}
	return (NULL);
}
