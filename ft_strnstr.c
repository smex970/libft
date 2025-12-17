/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:21:48 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 11:04:21 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	size_t			k;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big && big[i] && i < len)
	{
		k = 0;
		while (big[i + k] == little[k] && i + k < len)
		{
			if (little[k + 1] == '\0')
				return ((char *)big + i);
			k++ ;
		}
		i++ ;
	}
	return (NULL);
}
