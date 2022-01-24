/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:48:08 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/01/24 16:56:24 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/pipex.h"

void	error(char *s, char *argv)
{
	ft_putstr_fd(s, 2);
	ft_putstr_fd(argv, 2);
	ft_putstr_fd("\n", 2);
	exit(1);
}

void	arg_error(void)
{
	ft_putstr("Pas assez d'arguments ! ");
	exit(0);
}

char	*path(char *cmd, char **envp)
{
	char	**paths;
	char	*path;
	int		i;
	char	*part_path;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i] && cmd != NULL)
	{
		part_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(part_path, cmd);
		free(part_path);
		if (access(path, F_OK) == 0)
		{
			free_tab(paths);
			return (path);
		}
		free(path);
		i++;
	}
	free_tab(paths);
	return (NULL);
}

void	exec(char *argv, char **envp)
{
	char	**cmd;
	char	*line;

	cmd = ft_split(argv, ' ');
	line = path(cmd[0], envp);
	if (!line)
	{
		free_tab(cmd);
		error("command not found : ", argv);
	}
	if (execve(line, cmd, envp) == -1)
	{
		free_tab(cmd);
		error("command not found : ", argv);
	}
	free_tab(cmd);
}

int	open_file(char *argv, int i)
{
	int	file;

	file = 0;
	if (i == 1)
		file = open(argv, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	else if (i == 2)
		file = open(argv, O_RDONLY, 0777);
	if (file == -1)
		error("Error with open or file does not exist", "");
	return (file);
}
