/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:37:21 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/01/04 21:40:10 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line_bonus.h"

void	*calloc_gnl(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero_gnl(ptr, (count * size));
	return (ptr);
}

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *) b;
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (b);
}

void	ft_bzero_gnl(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

size_t	strlen_gnl(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strchr_g(const char *str, int c)
{
	unsigned int	i;

	if (!str)
		return (NULL);
	if (c == 0)
	{
		i = 0;
		while (str[i])
			i++;
		return ((char *)str + i);
	}
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
