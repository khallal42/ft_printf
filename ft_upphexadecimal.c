/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upphexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:59:16 by khallal           #+#    #+#             */
/*   Updated: 2022/11/04 12:01:14 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upphexadecimal(unsigned long x)
{
	unsigned long	y;
	int				i;
	char			*s;

	i = 0;
	s = "0123456789ABCDEF";
	if (x > 15)
	{
		i += ft_upphexadecimal((x / 16));
		y = x % 16;
		i += ft_putchar(s[y]);
	}
	else
	{
		ft_putchar(s[x % 16]);
		i++;
	}
	return (i);
}
