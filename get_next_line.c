/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 12:52:08 by mfrancoi          #+#    #+#             */
/*   Updated: 2017/02/01 06:25:31 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_cut_string(char *str, char n)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i] != n)
		i++;
	if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(str) - i))))
		return (NULL);
	new = ft_strcpy(new, &str[i + 1]);
	free(str);
	return (new);
}

static char	*ft_check_n(char *str)
{
	int i;
	int n;

	i = -1;
	n = 0;
	while (str[++i])
		if (str[i] == '\n')
			n++;
	if (i != 0)
		str = (n != 0) ? ft_cut_string(str, '\n') : ft_cut_string(str, '\0');
	else
		str = NULL;
	return (str);
}

static char	*ft_line_up(char *str, char **line)
{
	int n;

	n = 0;
	while (str[n] != '\n' && str[n] != '\0')
		n++;
	if (!(*line = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	*line = ft_strncpy(*line, str, (int)n);
	line[0][n] = '\0';
	str = ft_check_n(str);
	return (str);
}

static char	*ft_read(char *str, int fd, char *buf)
{
	int i;
	int ret;

	i = 0;
	buf[BUFF_SIZE] = 0;
	ret = read(fd, buf, BUFF_SIZE);
	if (ret == -1)
	{
		free(buf);
		return (NULL);
	}
	buf[ret] = 0;
	str = ft_realloc((char*)str, ret + ft_strlen(str));
	ft_strcpy(&str[i], buf);
	i = i + ret;
	while (ret == BUFF_SIZE)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = 0;
		str = ft_realloc((char*)str, ret + ft_strlen(str));
		ft_strcpy(&str[i], buf);
		i = i + ret;
	}
	free(buf);
	return (str);
}

int			get_next_line(const int fd, char **line)
{
	char		*buf;
	static char *str = NULL;

	if (fd < 0 || line == NULL)
		return (-1);
	if (str == NULL)
	{
		if (!(str = (char*)malloc(sizeof(char))))
			return (-1);
		if (!(buf = (char*)malloc(sizeof(char) * BUFF_SIZE + 1)))
			return (-1);
		str = ft_read(str, fd, buf);
		if (str == NULL)
			return (-1);
	}
	str = ft_line_up(str, line);
	if (str == NULL)
		return (0);
	else
		return (1);
}
