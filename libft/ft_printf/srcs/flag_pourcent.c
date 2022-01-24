/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_pourcent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:25:13 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/10/25 18:22:54 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	flag_pourcent(void)
{
	int		count;

	count = 0;
	ft_putchar_fd('%', 1);
	count++;
	return (count);
}
