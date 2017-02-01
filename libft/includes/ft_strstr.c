/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:17:47 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 15:02:20 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i] != needle[j] && haystack[i] != '\0')
			i++;
		if (haystack[i] == '\0')
			return (NULL);
		while ((haystack[i + j] == needle[j]) && needle[j] != '\0')
			j++;
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
