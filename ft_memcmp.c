/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:00:46 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 11:05:30 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	while (a[i] == b[i] && i < n - 1)
		i++;
	return (a[i] - b[i]);
}
