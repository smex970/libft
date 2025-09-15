/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:47:26 by asadqi            #+#    #+#             */
/*   Updated: 2025/09/15 12:17:08 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(src);
	if (dsize == 0 || !(dsize))
		return (len);
	while (dsize > 1 && src[i])
	{
		dst[i] = src[i];
		dsize-- ;
		i++ ;
	}
	dst[i] = '\0';
	return (len);
}
