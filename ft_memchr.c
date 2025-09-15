/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:48:22 by asadqi            #+#    #+#             */
/*   Updated: 2025/09/15 15:00:10 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	if (n == 0)
		return (NULL);
	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (*src == (unsigned char) c)
			return (src);
		src++ ;
		i++ ;
	}
	return (NULL);
}
