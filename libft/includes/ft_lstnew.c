/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:13:28 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/12/03 17:04:07 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*n;
	void	*n_content;

	if (!(n = (t_list*)malloc(sizeof(t_list*))))
		return (NULL);
	n_content = ft_memalloc(content_size);
	if (content == NULL)
	{
		n->content = NULL;
		n->content_size = 0;
	}
	else
	{
		ft_memcpy(n_content, content, content_size);
		n->content_size = content_size;
		n->content = ft_memalloc(content_size);
		ft_memcpy(n->content, content, content_size);
	}
	n->next = NULL;
	return (n);
}
