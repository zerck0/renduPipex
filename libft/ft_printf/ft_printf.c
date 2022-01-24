/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:04:19 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/26 15:17:14 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

static int	ft_conv(const char *str, va_list args, int *i)
{
	int	count;

	count = 0;
	if (str[*i] == 'c')
		count = flag_c(args);
	else if (str[*i] == 's')
		count = flag_s(args);
	else if (str[*i] == 'p')
		count = flag_p(args);
	else if (str[*i] == 'd' || str[*i] == 'i')
		count = flag_di(args);
	else if (str[*i] == 'u')
		count = flag_u(args);
	else if (str[*i] == 'x' || str[*i] == 'X')
		count = flag_x(args, str[*i]);
	else if (str[*i] == '%')
		count = flag_pourcent();
	else
		return (-1);
	return (count);
}

static int	ft_boucle(va_list args, const char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]) != NULL)
		{
			i++;
			count += ft_conv(str, args, &i);
		}
		else
		{
			write(1, &str[i], 1);
			count ++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			count;

	va_start(args, str);
	count = 0;
	count = ft_boucle(args, str);
	if (!str)
		return (-1);
	va_end(args);
	return (count);
}
