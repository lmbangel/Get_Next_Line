/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:56:31 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/05 00:45:51 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	long	nb;
	char	*str;

	nb = (n < 0) ? -(long)n : n;
	sign = (n < 0) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((nb /= 10) >= 1)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	nb = (n < 0) ? -(long)n : n;
	while (i-- + sign)
	{
		str[i] = nb % 10 + 48;
		nb /= 10;
	}
	(i == 0) ? str[i] = '-' : 0;
	return (str);
}
