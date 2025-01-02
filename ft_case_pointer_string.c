/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_pointer_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:01:33 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/25 15:07:34 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_case_pointer(unsigned long long point)
{
	char	*p;
	int		n;

	p = ft_all_lower(ft_base(point, 16));
	n = ft_putstr_count("0x");
	n += ft_putstr_count(p);
	free(p);
	return (n);
}

int	ft_case_string(char *str)
{
	int n;

	if (str == NULL)
		str = "(null)";
	n = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (n);
}
