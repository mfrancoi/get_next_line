/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:33:30 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 13:40:32 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (i < n && p1[i] == p2[i])
		i++;
	if (i >= n)
		i--;
	return ((unsigned char)p1[i] - (unsigned char)p2[i]);
}
