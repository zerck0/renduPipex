/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:14:05 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/05/31 13:19:28 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	unsigned int	len(int n)
{
	unsigned int	len;
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	len = 0;
	if (n <= 0)
		len++;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*ret;
	unsigned int	size;
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	size = len(n);
	ret = ft_calloc(sizeof(char), (size + 1));
	if (!ret)
		return (NULL);
	if (n < 0)
		*ret = '-';
	if (n == 0)
		*ret = '0';
	while (nb > 0)
	{
		size--;
		ret[size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (ret);
}
