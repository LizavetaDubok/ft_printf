/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:09:35 by ldubok            #+#    #+#             */
/*   Updated: 2026/08/13 13:34:32 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


int	ft_printf (const char *, ...);
int	ft_parse_format (char, va_list *);
int	ft_putchar (char);
int	ft_putstr (char *);
int	ft_putnbr (int);
int	ft_putunbr (unsigned int);
int ft_puthexa (unsigned int, char);
int ft_putptr (void *);

