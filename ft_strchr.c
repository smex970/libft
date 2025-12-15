/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:09:30 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/15 20:02:53 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i++;
	}
	if (1 <= c && c <= 127)
		return (NULL);
	if ((unsigned char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
