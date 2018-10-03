/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 11:21:41 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/05 02:19:40 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	int		nbr;

	i = 0;
	nbr = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (neg == 1 ? -nbr : nbr);
}
