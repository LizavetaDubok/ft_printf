/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 19:23:44 by ldubok            #+#    #+#             */
/*   Updated: 2026/08/12 19:43:14 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int ret;
	ret = ft_printf(" NULL %s NULL ", NULL);
	ft_putchar('\n');
	ft_putnbr(ret);
	ft_putchar('\n');
}
