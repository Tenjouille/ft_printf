/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:05:37 by tbourdea          #+#    #+#             */
/*   Updated: 2022/12/02 16:51:21 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_mallocsize(long n, int base)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n >= base)
	{
		size++;
		n = n / base;
	}
	return (size);
}

char	*ft_strrev(char *dest, int len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < len - i)
	{
		tmp = dest[i];
		dest[i] = dest[len - i];
		dest[len - i] = tmp;
		i++;
	}
	return (dest);
}

char	*ft_itoa_base(int n, char *b)
{
	long	nb;
	char	*dest;
	int		i;
	int		base;

	base = ft_strlen(b);
	nb = n;
	i = 1;
	dest = malloc(sizeof(char) * (ft_mallocsize(nb, base) + 1));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	if (n < 0)
		nb = -nb;
	while (nb >= base)
	{
		dest[i] = b[nb % base];
		nb = nb / base;
		i++;
	}
	dest[i] = b[nb];
	if (n < 0)
		dest[i + 1] = '-';
	return (ft_strrev(dest, ft_mallocsize(n, base)));
}

