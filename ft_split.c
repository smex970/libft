/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:04:55 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 12:16:42 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (s && *s)
	{
		if (*s != c && index == 0)
		{
			index = 1;
			len++;
		}
		else if (*s == c)
			index = 0;
		s++;
	}
	return (len);
}

static int	next_len(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	return (count);
}

static char	**free_split(char **split, int j)
{
	while (0 < j)
		free(split[--j]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	size_t	i;
	char	**split;

	i = 0;
	split = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = next_len(s, c);
			split[i] = ft_calloc(len + 1, sizeof(char));
			if (!split[i])
				return (free_split(split, i));
			ft_memcpy(split[i++], s, len);
			s += len;
		}
	}
	return (split);
}
