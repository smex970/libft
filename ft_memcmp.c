/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:00:46 by asadqi            #+#    #+#             */
/*   Updated: 2025/09/15 15:37:48 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//#include <stdio.h>



int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
	{
		i++ ;
	}

	return (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i));
}
/*
#include "string.h"

int main(void)
{
	char s[10] = "Bonjour";
	char sCpy[10] = "Bonjour";
	printf("%d", ft_memcmp(s, sCpy, 4));
	printf("\n");
	printf("%d", memcmp(s, sCpy, 4));
	return (0);
}*/