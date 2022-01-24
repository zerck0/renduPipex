/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:23:32 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/12 17:23:39 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ullen_base(unsigned long nbr, int base)
{
	size_t	len;

	len = 1;
	while (nbr / base)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
