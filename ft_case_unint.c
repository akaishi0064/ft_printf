/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_unint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:51:24 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/25 19:32:05 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_nbr(unsigned int n)
{
	char			str;
	unsigned int	tmp;
	size_t			t;

	tmp = n;
	t = 0;
	while (9 < tmp)
	{
		tmp = tmp / 10;
		t++;
	}
	if (9 < n)
		ft_put_nbr(n / 10);
	str = '0' + n % 10;
	write (1, &str, 1);
	t = t + 1;
	return (t);
}

int	ft_case_unint(unsigned int unint)
{
	int n;

	n = 0;
	n = ft_put_nbr(unint);
	return (n);
}

