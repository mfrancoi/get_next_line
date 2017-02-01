/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:36:09 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/12/03 12:52:52 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_counter_n(int n)
{
	signed int	s_size;

	s_size = 1;
	if (n < 0)
	{
		s_size++;
		n = n * -1;
	}
	if (n == -2147483648)
	{
		s_size++;
		n = 147483648;
	}
	while (n >= 10)
	{
		n = n / 10;
		s_size++;
	}
	return (s_size);
}

static	char	*ft_put_nbr_malloc(int n, int u_length, char *str)
{
	if (n < 0 && n > -2147483648)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	if (n >= 10)
		ft_put_nbr_malloc(n / 10, u_length - 1, str);
	str[u_length] = (n % 10 + '0');
	return (str);
}

char			*ft_itoa(int n)
{
	signed int	u_length;
	char		*str;

	u_length = ft_counter_n(n);
	str = (char *)malloc(sizeof(*str) * u_length + 1);
	if (str == NULL)
		return (NULL);
	str[u_length + 1] = '\0';
	ft_put_nbr_malloc(n, u_length - 1, str);
	str[u_length] = '\0';
	return (str);
}
