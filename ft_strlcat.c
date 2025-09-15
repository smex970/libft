/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:17:37 by asadqi            #+#    #+#             */
/*   Updated: 2025/09/15 12:58:37 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(dst);
	if (dsize == 0)
		return (ft_strlen(src));
	if (len > dsize)
		return (ft_strlen(src) + dsize);
	while (len + i < dsize - 1 && src[i])
	{
		dst[i + len] = src[i];
		i++ ;
	}
	dst[i + len] = '\0';
	return (len + ft_strlen(src));
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dst_1[10] = "ac";
	char dst_2[10] = "ac";
	char src[10] = "1234";
	printf("%ld", ft_strlcat(dst_1, src, 0));
	printf(" ----- ");
	printf("%ld", strlcat(dst_2, src, 0));
	return (0);
}*/