/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:23:50 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/25 18:21:53 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	flag_c(va_list args)
{
	char	c;
	int		count;

	count = 0;
	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	count++;
	return (count);
}
