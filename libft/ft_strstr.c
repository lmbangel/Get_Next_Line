/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:25:52 by lmbangel          #+#    #+#             */
/*   Updated: 2018/05/26 12:26:54 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int x;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0')
	{
		x = 0;
		while (needle[x] == haystack[i + x])
		{
			if (needle[x + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			x++;
		}
		i++;
	}
	return (0);
}
