/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:37:16 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:20:25 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	b;
	char	*str;

	str = (char *)s;
	b = (unsigned char) c;
	i = ft_strlen(s);
	if (i == 0 && str[i] == '\0' && b == '\0')
		return (str);
	while (i >= 0)
	{
		if (str[i] == b)
			return (&str[i]);
		i--;
	}
	return (0);
}
