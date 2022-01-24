/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:30:30 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/12/09 03:13:53 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../../libft.h"
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	flag_c(va_list args);
int	flag_s(va_list args);
int	flag_p(va_list args);
int	flag_di(va_list args);
int	flag_u(va_list args);
int	flag_x(va_list args, char c);
int	flag_pourcent(void);

#endif
