/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:17:19 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:19:41 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(dst);
	if (dstsize <= l)
		return (ft_strlen(src) + dstsize);
	while (dstsize - l - 1 != 0 && src[i] != '\0')
		dst[l++] = src[i++];
	dst[l] = '\0';
	while (src[i++] != '\0')
		l++;
	return (l);
}
