/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 01:43:17 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/11 23:38:08 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8

# include <fcntl.h>

int		get_next_line(int const fd, char **line);
char	*ft_strjoin_2(char *s1, char *s2);
int		ft_end_of_line(char **save_buff, char **line);

#endif
