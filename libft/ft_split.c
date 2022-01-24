/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:20:59 by tgeorgin          #+#    #+#             */
/*   Updated: 2021/05/25 16:12:55 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		count++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static int	len_word(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static	void	*free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static	char	*word_dup(char const *src, char c)
{
	char	*dst;
	int		size_word;

	size_word = len_word(src, c);
	dst = ft_calloc(sizeof(char), (size_word + 1));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, size_word);
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		nb_word;
	int		i;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	nb_word = count_words(s, c);
	ret = malloc(sizeof(void *) * (nb_word + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < nb_word)
	{
		ret[i] = word_dup(s, c);
		if (!ret[i])
			return (free_tab(ret));
		s += ft_strlen(ret[i++]);
		while (*s && *s == c)
			s++;
	}
	ret[i] = NULL;
	return (ret);
}
