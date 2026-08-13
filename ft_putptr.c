/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 12:25:18 by ldubok            #+#    #+#             */
/*   Updated: 2026/08/13 13:25:42 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_puthexa_long(unsigned long n)
{
	int		len;
	int		base;
	char	*digits;

	len = 0;
	base = 16;
	digits = "0123456789abcdef";
	if (n / base)
		len += ft_puthexa_long(n / base);
	len += ft_putchar(digits[n % base]);
	return (len);
}

int	ft_putptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_puthexa_long((unsigned long) ptr));
}
