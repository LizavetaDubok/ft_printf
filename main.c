/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 19:23:44 by ldubok            #+#    #+#             */
/*   Updated: 2026/08/13 13:50:17 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	main(void)
{
	int	ret;

	ret = ft_printf(" NULL %p NULL ", 0);
	ft_putchar('\n');
	ft_putnbr(ret);
	ft_putchar('\n');
	ret = printf(" NULL %p NULL ", 0);
	ft_putchar('\n');
	ft_putnbr(ret);
	ft_putchar('\n');
}
