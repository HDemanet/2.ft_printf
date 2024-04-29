/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemanet <hdemanet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:56:45 by hdemanet          #+#    #+#             */
/*   Updated: 2024/04/25 15:18:46 by hdemanet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr(char *str);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_hexlower(unsigned int nb);
int		ft_hexupper(unsigned int nb);
int		ft_pointer(unsigned long ptr);

#endif