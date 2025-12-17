/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:29:07 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 11:05:23 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*temp;
	unsigned char			*d;
	const unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	temp = (unsigned char *)dest;
	if (dest != 0 || src != 0)
	{
		if (s < d)
		{
			while (n--)
				*(d + n) = *(s + n);
		}
		else
		{
			while (n--)
				*(d++) = *(s++);
		}
	}
	return (temp);
}
