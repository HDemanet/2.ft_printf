/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:06:47 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/25 12:46:08 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 4294967295)
	{
		i += ft_putchar('4');
		nb = 294967295;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		i += ft_putchar(nb + 48);
	return (i);
}

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		i += ft_putchar('-');
		i += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		i += ft_putchar(nb + 48);
	return (i);
}
