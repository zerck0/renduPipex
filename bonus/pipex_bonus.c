/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:01:14 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/01/24 16:51:57 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/pipex.h"

void	*free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

void	child_process(char *argv, char **envp, t_ppx *pip)
{
	pid_t	pid;

	if (pipe(pip->p) == -1)
		error("Error with Pipe", "");
	pid = fork();
	if (pid == -1)
		error("Error with fork", "");
	if (pid == 0)
	{
		close(pip->p[READ_END]);
		dup2(pip->p[1], STDOUT_FILENO);
		exec(argv, envp);
	}
	else
	{
		close(pip->p[WRITE_END]);
		dup2(pip->p[READ_END], STDIN_FILENO);
		waitpid(pid, NULL, 0);
	}
}

int	main(int argc, char **argv, char **envp)
{
	t_ppx	pip;
	int		i;
	int		filein;
	int		fileout;

	if (argc >= 5)
	{
		pip = init_pipex(argc, argv, envp);
		pip.cmd_cnt = argc - 3;
		i = 2;
		fileout = open_file(argv[argc - 1], 1);
		filein = open_file(argv[1], 2);
		dup2(filein, STDIN_FILENO);
		while (pip.cmd_cnt != 1)
		{
			child_process(argv[i++], envp, &pip);
			pip.cmd_cnt--;
		}
		dup2(fileout, STDOUT_FILENO);
		exec(argv[argc - 2], envp);
	}
	else
		arg_error();
	return (0);
}
