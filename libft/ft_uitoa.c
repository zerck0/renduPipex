/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:18:10 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/22 19:16:23 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	unsigned int	len(unsigned int n)
{
	unsigned int	len;
	unsigned int	nb;

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

char	*ft_uitoa(unsigned int n)
{
	char			*ret;
	unsigned int	size;
	unsigned int	nb;

	nb = n;
	size = len(n);
	ret = ft_calloc(sizeof(char), (size + 1));
	if (!ret)
		return (NULL);
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
