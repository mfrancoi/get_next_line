/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:14:13 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/12/05 17:57:04 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*tmp;

	if (lst == NULL || (*f) == NULL)
		return (NULL);
	if (!(ret = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	ft_memcpy(ret, f(lst), lst->content_size);
	tmp = ret;
	while (lst->next != NULL)
	{
		if (!(tmp->next = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		ft_memcpy(tmp->next, f(lst->next), lst->next->content_size);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (ret);
}
