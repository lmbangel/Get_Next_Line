/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:03:14 by lmbangel          #+#    #+#             */
/*   Updated: 2018/05/26 12:04:46 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *new;

	new = dest;
	while (*new != '\0')
	{
		new++;
	}
	while (*src != '\0')
	{
		*new = *src;
		new++;
		src++;
	}
	*new = '\0';
	return (dest);
}
