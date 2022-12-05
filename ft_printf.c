/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:33:27 by tbourdea          #+#    #+#             */
/*   Updated: 2022/12/05 19:03:18 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_select(va_list params, char c)
{
	int		len;

	len = 0;
	if (c == 'c')
		len += ft_printchar(va_arg(params, int));
	else if (c == 's')
		len += ft_printstr(va_arg(params, const char *));
	else if (c == 'p')
		len += ft_printptr(va_arg(params, long unsigned int));
	else if (c == 'd' || c == 'i')
		len += ft_printnbr_base(va_arg(params, int), "0123456789");
	else if (c== 'u')
		len += ft_printunbr_base(va_arg(params, unsigned int), "0123456789");
	else if (c == 'x')
		len += ft_printnbr_base(va_arg(params, int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_printnbr_base(va_arg(params, int), "0123456789ABCDEF");
	else if (c == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	params;

	len = 0;
	i = 0;
	va_start(params, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_select(params, str[i + 1]);
			i++;
		}
		else
		{
			ft_printchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(params);
	return (len);
}

int	main(int ac, char **av)
{
	int	len;
	int	tlen;
	(void) ac;

	// len = ft_printf("Coucou\n");
	// ft_printf("Coucou %s\n", "len");
	// ft_printf("Coucou %c\n", 'l');
	len = printf("%u", atoi(av[1]));
	printf("\n%d\n", len);
	tlen = ft_printf("%u", atoi(av[1]));
	ft_printf("\n%d\n", tlen);
	return (0);
}