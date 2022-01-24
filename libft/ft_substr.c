/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:11:05 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/05/27 12:36:17 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			slen;
	size_t			i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		dest = ft_calloc(sizeof(char), slen + 1);
	else
		dest = ft_calloc(sizeof(char), len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	if (slen >= start)
	{
		while (s[start] && i < len)
			dest[i++] = s[start++];
	}
	return (dest);
}
