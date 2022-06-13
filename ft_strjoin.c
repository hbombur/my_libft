/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:13:21 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:19:29 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	l;
	int		i;

	i = 0;
	if (s2 == 0 || s1 == 0)
		return (0);
	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = (char *) malloc(l);
	if (!dst)
		return (NULL);
	l = 0;
	while (s1[i] != '\0')
		dst[l++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		dst[l++] = s2[i++];
	dst[l] = '\0';
	return (dst);
}
