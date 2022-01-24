/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:02:05 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/25 19:13:14 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long long nb, const char *base)
{
	unsigned long long	len;
	int					cnt;

	cnt = 0;
	len = ft_strlen(base);
	if (nb >= len)
		cnt += ft_putnbr_base(nb / len, base);
	cnt += ft_putchar(base[nb % len]);
	return (cnt);
}
