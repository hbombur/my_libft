/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:56 by hbombur           #+#    #+#             */
/*   Updated: 2022/05/25 19:12:42 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	char	*str;

	b = (unsigned char)c;
	str = (char *) s;
	if (str == 0)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == b)
			return (str);
		str++;
	}
	if (*str == b)
		return (str);
	return (NULL);
}
