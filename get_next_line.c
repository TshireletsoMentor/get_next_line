/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:57:00 by tmentor           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/07/11 08:59:59 by tmentor          ###   ########.fr       */
=======
/*   Updated: 2019/07/09 16:19:33 by tmentor          ###   ########.fr       */
>>>>>>> 1560268066ea539258f3028fb8f189ac8d7d15ce
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
static char	*reader(char *store, char **line)
{
	char	*tmp;
	int		n;

	n = 0;
	while (store[n] != '\n' && store[n] != '\0')
		n++;
	*line = ft_strsub(store, 0, n);
	if (store[n] == '\0')
	{
		tmp = NULL;
		ft_strdel(&store);
	}
	else
	{
		tmp = ft_strsub(store, n + 1, ft_strlen(store + n) + 1);
		ft_strdel(&store);
	}
	return (tmp);
}
int			get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*store[FD_MAX];
	int				red;
	char			*tmp;

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (!store[fd])
		store[fd] = ft_strnew(0);
	while (!ft_strchr(store[fd], '\n') &&
			(red = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[red] = '\0';
		tmp = ft_strjoin(store[fd], buff);
		ft_strdel(&store[fd]);
		store[fd] = ft_strdupdel(&tmp);
	}
	if (red < BUFF_SIZE && !ft_strlen(store[fd]))
=======
static char	*reader(char *hold, char **line)
{
	char		*tmp;
	int		i;

	i = 0;
	while (hold[i] != '\0' && hold[i] != '\n')
		i++;
	*line = ft_strsub(hold, 0, i);
	if (hold[i] == '\0')
	{
		tmp = NULL;
		free(hold);
	}
	else
	{
		tmp = ft_strdup(ft_strchr(hold, '\n') + 1);
		free(hold);
	}
	return (tmp);
}

int		get_next_line(const int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*store[1025];
	int	red;
	char		*tmp;

	if (fd < 0 || line == NULL || read(fd, buff, 0) < 0)
		return (-1);
	if (store[fd] == NULL)
		store[fd] = ft_strnew(0);
	while ((red = read(fd, buff, BUFF_SIZE)) &&
		(ft_strchr(store[fd], '\n') == NULL))
	{
		buff[red] = '\0';
		tmp = ft_strjoin(store[fd], buff);
		free(store[fd]);
		store[fd] = ft_strdup(tmp);
		free(tmp);
	}
	if (red < BUFF_SIZE && ft_strlen(store[fd]) == 0)
>>>>>>> 1560268066ea539258f3028fb8f189ac8d7d15ce
		return (0);
	store[fd] = reader(store[fd], line);
	return (1);
}
