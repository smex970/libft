/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:00:32 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 11:04:42 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	*ft_strdup(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t				len;
	char				*join;
	unsigned int		i;
	unsigned int		j;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (len == 0)
		return (ft_strdup(""));
	join = malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
