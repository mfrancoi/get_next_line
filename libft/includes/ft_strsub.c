/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:46:30 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/18 17:56:48 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	r = (char*)malloc(sizeof(*r) * len + 1);
	if (r == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		r[i] = s[start];
		i++;
		start++;
	}
	r[i] = '\0';
	return (r);
}
