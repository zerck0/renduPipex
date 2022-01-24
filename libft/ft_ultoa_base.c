/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:27:50 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/12 17:30:27 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ulstr_base(char *str, unsigned long n, char *radix, size_t base)
{
	if (n > base - 1)
		ft_ulstr_base(str - 1, n / base, radix, base);
	*str = radix[n % base];
}

char	*ft_ultoa_base(unsigned long n, char *radix)
{
	char	*str;
	size_t	len;
	size_t	base;

	base = ft_strlen(radix);
	len = ft_ullen_base(n, base);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	ft_ulstr_base(str + len - 1, n, radix, base);
	*(str + len) = '\0';
	return (str);
}
