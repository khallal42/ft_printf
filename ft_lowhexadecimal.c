/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:58:48 by khallal           #+#    #+#             */
/*   Updated: 2022/11/04 14:28:33 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhexadecimal(unsigned long x)
{
	unsigned long	y;
	char			*s;
	int				i;

	s = "0123456789abcdef";
	i = 0;
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
	return (i);
}
