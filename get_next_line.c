/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:57:00 by tmentor           #+#    #+#             */
/*   Updated: 2019/07/11 09:26:56 by tmentor          ###   ########.fr       */
/*   Updated: 2019/07/09 16:19:33 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
		return (0);
	store[fd] = reader(store[fd], line);
	return (1);
}
