/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:04:36 by lmbangel          #+#    #+#             */
/*   Updated: 2018/06/05 00:47:49 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		nb_words;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	nb_words = ft_count_word((char *)s, c);
	if (!(str = ((char**)malloc(sizeof(*str) * (nb_words + 1)))))
		return (NULL);
	while (nb_words)
	{
		while (*s != '\0' && *s == c)
			s++;
		len = ft_strlenc(s, c);
		str[i] = ft_strsub(s, 0, len);
		if (str[i] == '\0')
			return (NULL);
		s = s + ft_strlenc(s, c);
		i++;
		nb_words--;
	}
	str[i] = NULL;
	return (str);
}
