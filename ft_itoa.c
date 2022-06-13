/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:19:29 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:23:12 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_checkmin(int i)
{
	size_t	l;

	l = 0;
	if (i == 0)
		l = 1;
	if (i < 0)
	{
		i = i / (-10);
		l = l + 2;
	}
	while (i > 0)
	{
		i = i / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	l;

	l = ft_checkmin(n);
	ret = (char *) malloc((l + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ret[l--] = '\0';
	if (n == 0)
		ret[l] = 0 + 48;
	if (n < 0)
	{
		ret[0] = '-';
		ret[l--] = -(n % (-10)) + 48;
		n = n / (-10);
	}
	while (n > 0)
	{
		ret[l--] = (n % 10) + 48;
		n = n / 10;
	}
	return (ret);
}
