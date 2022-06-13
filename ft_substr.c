/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:13:43 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:20:40 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenstr;
	size_t	l;
	char	*dst;

	l = 0;
	if (s == 0)
		return (NULL);
	lenstr = ft_strlen(s);
	if (len > lenstr - start)
		len = lenstr - start;
	dst = (char *)malloc (len + 1);
	if (!dst)
		return (NULL);
	while (s && l < len && start < lenstr)
		dst[l++] = s[start++];
	dst[l] = '\0';
	return (dst);
}
