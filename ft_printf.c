/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:01:37 by ldubok            #+#    #+#             */
/*   Updated: 2026/08/13 13:13:06 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_format (char format, va_list *args)
{
	if (format == 'c')
		return (ft_putchar((char)va_arg(*args, int)));
	if (format == 'i' || format == 'd')
		return (ft_putnbr(va_arg(*args, int)));
	if (format == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	if (format == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (format == 'x')
		return (ft_puthexa(va_arg(*args, unsigned long), 'x'));
	if (format == 'X')
		return (ft_puthexa(va_arg(*args, unsigned long), 'X'));
	if (format == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf (const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;
	
	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_parse_format(str[i], &args);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
