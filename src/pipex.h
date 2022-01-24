/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:31:16 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/01/24 15:44:49 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "../libft/libft.h"

# define WRITE_END 1
# define READ_END 0

typedef struct pipex
{
	int		ac;
	char	**av;
	char	**envp;
	int		p[2];
	int		infile;
	int		outfile;
	int		cmd_cnt;
}				t_ppx;

int		open_file(char *argv, int i);
void	exec(char *argv, char **envp);
void	*free_tab(char **tab);
void	arg_error(void);
t_ppx	init_pipex(int ac, char **av, char **envp);
void	error(char *s, char *argv);
char	*path(char *cmd, char **envp);

#endif