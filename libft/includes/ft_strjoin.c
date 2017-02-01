/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:58:33 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 14:47:16 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	l;
	size_t	i;
	size_t	y;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	y = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	r = (char *)malloc(sizeof(*r) * (l + 1));
	if (r == NULL)
		return (NULL);
	while (s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		r[i + y] = s2[y];
		y++;
	}
	r[i + y] = 0;
	return (r);
}
