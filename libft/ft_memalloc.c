/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 02:31:25 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/04 17:00:40 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*area;

	i = 0;
	if ((area = (char *)malloc(size * sizeof(char))) == NULL)
		return (NULL);
	while (i < size)
	{
		area[i] = 0;
		i++;
	}
	return (area);
}
