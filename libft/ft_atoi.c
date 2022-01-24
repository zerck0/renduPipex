/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:54:28 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/05/31 13:25:42 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	nb;
	int		symb;

	nb = 0;
	symb = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			symb *= -1;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nb *= 10;
		nb = nb + str[i] - '0';
		i++;
	}
	if (symb == -1)
		return (-nb);
	else
		return (nb);
}
