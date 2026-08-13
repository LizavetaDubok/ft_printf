/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 12:15:31 by ldubok            #+#    #+#             */
/*   Updated: 2026/08/13 13:12:51 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char mode)
{
	int		len;
	int		base;
	char	*digits;

	len = 0;
	base = 16;
	if (mode == 'x')
		digits = "0123456789abcdef";
	else
		digits = "0123456789ABCDEF";
	if (n / base)
		len += ft_puthexa(n / base, mode);
	len += ft_putchar(digits[n % base]);
	return (len);
}
