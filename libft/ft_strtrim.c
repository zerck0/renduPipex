/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:58:07 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/05/27 12:36:18 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static	size_t	len_without_set(char const *str, char const *set)
{
	size_t	len;

	len = ft_strlen(str);
	while (is_in_set(*str++, set))
		len--;
	while (*str)
		str++;
	while (is_in_set(*--str, set))
		len--;
	return (len);
}

static	int	only_set(char const *str, char const *set)
{
	while (*str)
		if (!is_in_set(*str++, set))
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	char	*d;

	if (!s1)
		return (NULL);
	if (!set || set == 0)
		return (ft_strdup(s1));
	if (only_set(s1, set))
	{
		dest = malloc(sizeof(char));
		*dest = 0;
	}
	else
	{
		dest = malloc(sizeof(char) * (len_without_set(s1, set) + 1));
		if (dest == NULL)
			return (NULL);
		d = dest;
		while (is_in_set(*s1, set))
			s1++;
		while (!only_set(s1, set))
			*d++ = *s1++;
		*d = 0;
	}
	return (dest);
}
