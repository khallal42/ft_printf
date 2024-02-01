/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:14:39 by khallal           #+#    #+#             */
/*   Updated: 2022/11/04 12:00:35 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadress(unsigned long x)
{
	unsigned long	y;
	int				i;
	char			*s;

	s = "0123456789abcdef";
	i = 0;
	ft_putstr("0x");
	if (x > 15)
	{
		i += ft_lowhexadecimal((x / 16));
		y = x % 16;
		write(1, &s[y], 1);
		i++;
	}
	else
	{
		ft_putchar(s[x % 16]);
		i++;
	}
	return (i + 2);
}
