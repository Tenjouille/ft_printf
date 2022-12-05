/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:04:43 by tbourdea          #+#    #+#             */
/*   Updated: 2022/12/05 16:26:24 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(long unsigned int nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		len += ft_printstr("(nil)");
	else
	{
		len += ft_printstr("0x");
		len += ft_printnbr_base(nb, "0123456789abcdef");
	}
	return (len);
}