/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 20:36:00 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/12/05 18:59:05 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t		ft_lnbr(char const *s, char c, size_t i, size_t y)
{
	while (s[i] && s[i] != c)
	{
		i++;
		y++;
	}
	return (y);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	size_t			n;
	size_t			y;
	char			**res;

	i = 0;
	n = 0;
	y = 0;
	if (s == NULL)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * ft_wnbr(s, c) + 1);
	if (res == NULL)
		return (NULL);
	res[ft_wnbr(s, c)] = NULL;
	while (i < ft_wnbr(s, c))
	{
		while (s[y] == c && s[y])
			y++;
		n = ft_lnbr(s, c, y, 0);
		res[i] = ft_strsub(s, y, n);
		y = y + n;
		i++;
	}
	return (res);
}
