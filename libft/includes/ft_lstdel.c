/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:55:47 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/12/05 19:30:23 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || del == NULL)
		return ;
	if ((*alst)->next != NULL)
		ft_lstdel(&(*alst)->next, *del);
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void**)alst);
}
