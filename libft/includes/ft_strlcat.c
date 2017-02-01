/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:19:36 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/25 19:31:39 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	j = 0;
	i = ft_strlen(dest);
	k = ft_strlen(src);
	if (n == 0)
		return (k);
	while (src[j] != '\0' && (j + i) < (n - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (i < n)
		return (k + i);
	else
		return (k + n);
}
