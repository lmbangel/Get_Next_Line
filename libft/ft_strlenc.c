/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 19:35:25 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/04 19:36:57 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenc(const char *str, char c)
{
	char	*temp;

	temp = (char *)str;
	while (*str != c && *str)
		++str;
	return (str - temp);
}
