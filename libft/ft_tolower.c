/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:27:26 by lmbangel          #+#    #+#             */
/*   Updated: 2018/05/26 12:28:32 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else if (c <= 32)
	{
		return (c);
	}
	else if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}
