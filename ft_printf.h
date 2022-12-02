/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:40:39 by tbourdea          #+#    #+#             */
/*   Updated: 2022/12/02 16:25:10 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printchar(char c);
int		ft_printstr(const char *str);
int		ft_select(va_list params, char c);
int		ft_printf(const char *str, ...);
int		ft_printnbr(int nbr, int len);
char	*ft_itoa_base(int n, char *b);
char	*ft_strrev(char *dest, int len);
int		ft_negative(int n);
int		ft_mallocsize(long n, int base);

#endif