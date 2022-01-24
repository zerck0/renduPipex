/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:28:32 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/26 15:13:49 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	flag_p(va_list args)
{
	void	*n;

	n = va_arg(args, void *);
	ft_putstr_fd("0x", 1);
	return (ft_putnbr_base((unsigned long long)n, "0123456789abcdef") + 2);
}
