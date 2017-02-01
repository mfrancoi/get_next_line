/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:18:25 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 14:48:54 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*r;

	i = 0;
	if (s == NULL)
		return (NULL);
	r = (char*)malloc(sizeof(*r) * (ft_strlen(s) + 1));
	if (r == NULL)
		return (NULL);
	while (s[i])
	{
		r[i] = f(s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
