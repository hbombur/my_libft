/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ch_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:56:46 by hbombur           #+#    #+#             */
/*   Updated: 2022/03/27 17:14:15 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// дописать функцию проверки принадлежности к типу данных

static int	check_num(int num)
{
	if (num < -2147483648 && num > 2147483647)
		return (0);
	else
		return (num);
}

int	ft_atoi_ch_int(const char *str)
{
	int	i;
	int	num;
	int	min;

	i = 0;
	min = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
	{
		min = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10;
		num = num + (str[i] - 48);
		i++;
	}
	num = num * min;
	if (check_num(num) == 0)
		return (0);
	return (num);
}
