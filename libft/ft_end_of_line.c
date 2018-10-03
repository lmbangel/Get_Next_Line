/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_of_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 06:22:36 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/13 06:23:10 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_end_of_line(char **save_buff, char **line)
{
	char	*limit;

	if ((limit = ft_strchr(*save_buff, '\n')))
	{
		*line = ft_strsub(*save_buff, 0, limit - *save_buff);
		ft_strcpy(*save_buff, limit + 1);
		return (1);
	}
	return (0);
}
