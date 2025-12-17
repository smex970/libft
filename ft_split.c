/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:04:55 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 11:04:54 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
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

char	*ft_dup(char *s, int start, int end)
{
	int		i;
	char	*dest;

	i = 0;
	if (!s)
		return (NULL);
	dest = malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (NULL);
	while (start < end)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

char	**free_split(char **split, int j)
{
	int	i;

	i = -1;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		index;
	char	**split;

	i = -1;
	index = -1;
	j = 0;
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	while ((size_t)ft_strlen(s) >= ++i)
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (size_t)ft_strlen(s)) && index >= 0)
		{
			split[j] = ft_dup((char *)s, index, i);
			if (!split[j++])
				return (free_split(split, j));
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
