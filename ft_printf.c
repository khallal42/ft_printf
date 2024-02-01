/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:36:50 by khallal           #+#    #+#             */
/*   Updated: 2022/11/03 22:07:54 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	forme(char s, va_list argptr)
{
	int	a;

	a = 0;
	if (s == 'c')
		a = ft_putchar(va_arg(argptr, int));
	else if (s == 's')
		a = ft_putstr(va_arg(argptr, char *));
	else if (s == 'd' || s == 'i')
		a += ft_putnbr(va_arg(argptr, int));
	else if (s == 'u')
		a += ft_putnbr(va_arg(argptr, unsigned int));
	else if (s == 'x')
		a += ft_lowhexadecimal(va_arg(argptr, unsigned int));
	else if (s == 'X')
		a += ft_upphexadecimal(va_arg(argptr, unsigned int));
	else if (s == 'p')
		a += ft_hexadress(va_arg(argptr, long long));
	else if (s == '%')
		a += ft_putchar('%');
	return (a);
}

int	ft_printf(const char *kh, ...)
{
	va_list	argptr;
	int		h;
	int		i;

	h = 0;
	i = 0;
	va_start(argptr, kh);
	while (kh[i] != '\0')
	{
		if (kh[i] == '%' && ft_check(kh[i + 1]))
		{
			h += forme(kh[i + 1], argptr);
			i++;
		}
		else if (kh[i] != '%')
			h += ft_putchar(kh[i]);
		if (kh[i] != '\0')
			i++;
	}
	va_end(argptr);
	return (h);
}
