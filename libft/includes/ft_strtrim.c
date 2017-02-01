/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 18:51:08 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/12/03 12:21:14 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		fin(char const *s)
{
	size_t i;

	i = ft_strlen(s);
	i--;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
		i--;
	return (i);
}

static int		debut(char const *s)
{
	size_t i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	y;
	size_t	a;
	char	*r;

	if (s == NULL)
		return (NULL);
	i = debut(s);
	y = fin(s);
	a = 0;
	if (y < i)
		return (ft_strdup(""));
	if (ft_strcmp(s, "") == 0)
		return (ft_strdup(""));
	r = (char*)malloc(sizeof(*r) * (y - i + 2));
	if (r == NULL)
		return (NULL);
	while (i <= y)
	{
		r[a] = s[i];
		a++;
		i++;
	}
	r[a] = '\0';
	return (r);
}
