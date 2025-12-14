/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:07:51 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/14 18:42:06 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	new_len(char const *s1, char const *set)
{
	size_t			new_len;
	unsigned int	i;

	new_len = ft_strlen(s1);
	i = 0;
	while (s1[i])
	{
		if (ft_strcmp(s1[i], set) == 1)
			new_len--;
		i++;
	}
	return (new_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	i;
	unsigned int	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = 0;
	trim = malloc(sizeof(char) * (new_len(s1, set) + 1));
	if (!trim)
		return (NULL);
	while (s1[i])
	{
		if (ft_strcmp(s1[i], set) == 0)
		{
			trim[j] = s1[i];
			j++;
		}
		i++;
	}
	trim[j] = '\0';
	return (trim);
}
