/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:06:22 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/01/24 16:56:05 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/pipex.h"

t_ppx	init_pipex(int ac, char **av, char **envp)
{
	t_ppx	pipex;

	pipex.ac = ac;
	pipex.av = av;
	pipex.envp = envp;
	pipex.cmd_cnt = 0;
	pipex.infile = 0;
	pipex.outfile = 0;
	return (pipex);
}
