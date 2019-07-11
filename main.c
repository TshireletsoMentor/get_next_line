/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:11:07 by gfernand          #+#    #+#             */
/*   Updated: 2019/07/10 08:34:52 by gfernand         ###   ########.fr       */
=======
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:57:23 by tmentor           #+#    #+#             */
/*   Updated: 2019/07/09 15:55:56 by tmentor          ###   ########.fr       */
>>>>>>> 1560268066ea539258f3028fb8f189ac8d7d15ce
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
<<<<<<< HEAD
#include "fcntl.h"

int		main(int argc, char **argv)
=======
#include <fcntl.h>

int		main(int ac, char *av[])
>>>>>>> 1560268066ea539258f3028fb8f189ac8d7d15ce
{
	int		fd;
	char	*line;

<<<<<<< HEAD
	if (argc < 1)
		return (0);
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		ft_putendl(line);
		ft_strdel(&line);
=======
	if (ac == 1)
		return (0);
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
>>>>>>> 1560268066ea539258f3028fb8f189ac8d7d15ce
	}
	close(fd);
	return (0);
}
