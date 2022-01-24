/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:37:53 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/01/04 21:40:16 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>

# define BUFFER_SIZE 1

char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	strlen_g(const char *str);
void	*calloc_gnl(size_t count, size_t size);
char	*get_next_line(int fd);
char	*ft_strchr_gnl(const char *str, int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero_gnl(void *s, size_t n);

#endif
