/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:24 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:18:42 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	s;
	unsigned char	*bb;
	size_t			i;

	i = 0;
	s = c;
	bb = b;
	while (i < len)
	{
		bb[i] = s;
		i++;
	}
	return (b);
}
