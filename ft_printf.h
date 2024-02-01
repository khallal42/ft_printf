/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:58:15 by khallal           #+#    #+#             */
/*   Updated: 2022/11/03 21:04:46 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_lowhexadecimal(unsigned long x);
int	ft_putchar(char c);
int	ft_putnbr(long nb);
int	ft_upphexadecimal(unsigned long x);
int	ft_putstr(char *s);
int	ft_printf(const char *kh, ...);
int	ft_hexadress(unsigned long x);
int	ft_check(char c);

#endif
