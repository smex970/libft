/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:07:51 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 11:04:16 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_start(char const *s, char const *set)
{
	size_t	i;
	int		j;
	int		index;

	i = 0;
	while (s[i])
	{
		j = 0;
		index = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				index = 1;
			j++;
		}
		if (!index)
			break ;
		i++;
	}
	return (i);
}

size_t	ft_end(char const *s, char const *set)
{
	size_t	len;
	size_t	i;
	int		index;

	len = ft_strlen(s) - 1;
	while (len > 0)
	{
		i = 0;
		index = 0;
		while (set[i])
		{
			if (s[len] == set[i])
				index = 1;
			i++;
		}
		if (!index)
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*dest;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set || !s1[0])
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	dest = malloc(sizeof(char) * (end - start + 2));
	if (!dest)
		return (NULL);
	while (start + i <= end)
	{
		dest[i] = s1[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
