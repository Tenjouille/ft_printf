/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printletters.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:20:53 by tbourdea          #+#    #+#             */
/*   Updated: 2022/12/05 15:00:16 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	int	len;

	len = 1;
	write(1, &c, 1);
	return (len);
}

int	ft_printstr(const char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		len += ft_printstr("(null)");
		return (len);
	}
	while (str[len])
		len += ft_printchar(str[len]);
	return (len);
}
