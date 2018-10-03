/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 06:42:47 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/13 06:43:17 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_2(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = (s1) ? ft_strlen(s1) : 0;
	len2 = ft_strlen(s2);
	result = ft_strnew(len1 + len2);
	if (result)
	{
		if (s1)
			ft_memcpy(result, s1, len1);
		ft_memcpy(result + len1, s2, len2);
	}
	if (s1)
		ft_strdel(&s1);
	return (result);
}
