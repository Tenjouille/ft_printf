/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:40:39 by tbourdea          #+#    #+#             */
/*   Updated: 2022/12/05 19:04:42 by tbourdea         ###   ########.fr       */
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
int		ft_printnbr_base(int nbr, char *base);
int		ft_size(int nb, int b);
int		ft_strlen(char	*str);
int		ft_printptr(long unsigned int nb);
int		ft_printunbr_base(unsigned int nb, char *base);

#endif