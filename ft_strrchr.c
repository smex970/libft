/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:36:01 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 11:04:19 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		p;

	p = -1;
	i = 0;
	while (s && s[i])
	{
		if (s[i] == (unsigned char) c)
			p = i;
		i++;
	}
	if (p >= 0)
		return ((char *)s + p);
	if (1 <= c && c <= 127)
		return (NULL);
	if ((unsigned char)c == '\0')
		return ((char *)(s + i));
	if (p != -1)
		return ((char *)(s + p));
	else
		return (NULL);
}
