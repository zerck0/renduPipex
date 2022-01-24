/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:40 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/25 19:06:50 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	flag_di(va_list args)
{
	long long	n;
	int			neg;

	n = va_arg(args, int);
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg++;
		write(1, "-", 1);
	}
	return (ft_putnbr_base(n, "0123456789") + neg);
}
