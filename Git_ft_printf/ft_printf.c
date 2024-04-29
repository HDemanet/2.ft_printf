/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:56:08 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/25 14:02:09 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_pointer(va_arg(args, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_hexlower(va_arg(args, int)));
	else if (c == 'X')
		return (ft_hexupper(va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_convert(format[++i], args);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/* int main(void) 
{
	int	i = 19;
	int	*ptr = &i;

    ft_printf("String : %s\n", "Helene");
    ft_printf("Un caractère : %c\n", 'D');
    ft_printf("Entier décimal : %d\n", 2147483647);
	ft_printf("Entier décimal : %i\n", -2147483648);
    ft_printf("Entier non signé : %u\n", 4294967295);
    ft_printf("Pointeur : %p\n", (void *)ptr);
    ft_printf("Hexadécimal minuscule : %x\n", 255);
    ft_printf("Hexadécimal majuscule : %X\n", 255);
    ft_printf("Pourcentage : %%\n");
    return 0;
} */