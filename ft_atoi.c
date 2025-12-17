/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <asadqi@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:24:46 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/17 12:38:55 by asadqi           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char str)
{
	return (str == ' ' || str == '\t' || str == '\n'
		|| str == '\v' || str == '\r' || str == '\f');
}

int	ft_atoi(const char *nptr)
{
	int		s;
	int		i;
	long	nbr;

	i = 0;
	s = 1;
	nbr = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr *= 10;
		nbr = nbr + (nptr[i] - 48);
		i++ ;
	}
	return ((int)(nbr * s));
}
