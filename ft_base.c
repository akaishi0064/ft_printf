/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:33:09 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/25 15:51:48 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char *ft_change(unsigned long long us, int a, char *str, int c)
{
	while (us != 0)
	{
		if ((us % a) < 10)
			str[c - 1] = (us % a) + 48;
		else
			str[c - 1] = (us % a) + 55;
		us /= a;
		c--;
	}
	return (str);
}

char	*ft_base(unsigned long long point, int base)
{
	char		*str;
	unsigned long long us;
	int			count;

	count = 0;
	us = point;
	if (point == 0)
		return (ft_strdup("0"));
	while (point != 0)
	{
		point = point / base;
		count++;
	}
	str = ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (0);
	str = ft_change(us, base, str, count);
	return (str);
}
