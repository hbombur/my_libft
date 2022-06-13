/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:10:34 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:18:26 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	const char		*src1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (const char *)src;
	i = 0;
	if (dst == src || n == 0)
		return (dst);
	while (n--)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
