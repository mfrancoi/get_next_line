/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 02:55:17 by mfrancoi          #+#    #+#             */
/*   Updated: 2017/02/01 02:55:21 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size)
{
	void	*str;

	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (ptr);
	str = malloc(sizeof(ptr) * (ft_strlen((char*)ptr) + size));
	ft_bzero(str, ft_strlen((char*)ptr) + size);
	str = ft_memcpy(str, ptr, ft_strlen((char*)ptr));
	if (str == NULL)
		return (ptr);
	free(ptr);
	return (str);
}
