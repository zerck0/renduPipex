/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:45:57 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/06/02 15:29:37 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			ptr = (char *)&str[i];
		i++;
	}
	if (str[i] == (char)c)
		ptr = (char *)&str[i];
	return (ptr);
}
