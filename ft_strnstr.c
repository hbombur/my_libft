/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:54:38 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:20:20 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		h;
	size_t		n;
	char		*str;

	i = 0;
	str = (char *)haystack;
	h = ft_strlen(str);
	n = ft_strlen(needle);
	if (len > h)
		len = h;
	if (*needle == '\0')
		return ((char *) haystack);
	if (len < n || str == 0)
		return (NULL);
	while (*str && i < len - n + 1)
	{
		if (ft_strncmp(str, needle, n) == 0)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
