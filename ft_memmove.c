/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:10:43 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:18:34 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (dst1 <= src1 || src1 + len <= dst1)
	{
		while (len--)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
		}
	}
	else
	{
		while (len--)
			*(dst1 + len) = *(src1 + len);
	}
	return (dst);
}
