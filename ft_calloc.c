/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:35:20 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:17:34 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	mult;

	mult = count * size;
	memory = malloc(mult);
	if (memory == NULL)
		return (NULL);
	else
	{
		ft_bzero(memory, mult);
		return (memory);
	}
}
