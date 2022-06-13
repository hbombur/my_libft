/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:13:43 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:20:32 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	l;
	size_t	n;

	if (s1 == 0 || set == 0)
		return (0);
	l = 0;
	n = 0;
	i = ft_strlen(s1);
	while (s1[l] && ft_strchr(set, s1[l]))
		l++;
	if (l == i)
		return (ft_calloc(1, 1));
	while (s1[i - 1] && ft_strchr(set, s1[i]))
		i--;
	str = (char *)malloc(i - l + 2);
	if (!str)
		return (NULL);
	while (l <= i)
		str[n++] = s1[l++];
	str[n] = '\0';
	return (str);
}
