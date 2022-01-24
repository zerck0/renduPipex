/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:33:02 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/26 15:17:00 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	flag_x(va_list args, char c)
{
	unsigned int	n;

	if (c == 'x')
	{
		n = va_arg(args, unsigned int);
		return (ft_putnbr_base(n, "0123456789abcdef"));
	}
	else
	{
		n = va_arg(args, unsigned int);
		return (ft_putnbr_base(n, "0123456789ABCDEF"));
	}
}
