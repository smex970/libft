/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:17:36 by asadqi            #+#    #+#             */
/*   Updated: 2025/12/15 19:28:39 by asadqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_nb(int n)
{
	int				len;
	unsigned int	nb;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	nb = n;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*fill_str(char *dest, unsigned int nb, int len, int j)
{
	unsigned int	i;

	i = len - 1;
	while (j < len)
	{
		dest[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char			*dest;
	unsigned int	nb;
	int				i;
	int				j;

	i = ft_len_nb(n) - 1;
	j = 0;
	dest = malloc(sizeof(char) * (ft_len_nb(n) + 1));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';
		j++;
	}
	nb = n;
	dest = fill_str(dest, nb, i + 1, j);
	return (dest);
}
