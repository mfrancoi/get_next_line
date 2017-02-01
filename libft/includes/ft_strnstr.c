/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:27:34 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/12/03 12:18:29 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*search(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i < n)
	{
		while ((haystack[i] != needle[j]) && (i < n) && haystack[i])
			i++;
		if (i == n || (haystack[i] == '\0' && needle[j]))
			return (NULL);
		while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
			j++;
		if ((i + j) >= n + 1)
			return (NULL);
		if (needle[j] == '\0')
			return ((char*)haystack + i);
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}

char			*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	else
		return (search(haystack, needle, n));
}
