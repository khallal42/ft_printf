/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:59:02 by khallal           #+#    #+#             */
/*   Updated: 2022/11/04 12:01:04 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cont(long k)
{
	int		i;
	long	l;

	l = k;
	i = 0;
	if (l == 0)
	{
		return (1);
	}
	if (l < 0)
	{
		l *= (-1);
		i = 1;
	}
	while (l > 0)
	{
		l = l / 10;
		i = i + 1;
	}
	return (i);
}

int	ft_putnbr(long nb)
{
	long	i;
	long	k;

	i = 0;
	k = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		k = 1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr((nb % 10));
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return (k + cont(nb));
}
