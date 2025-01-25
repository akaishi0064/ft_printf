/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_char_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 15:18:02 by chakaish          #+#    #+#             */
/*   Updated: 2025/01/16 15:55:36 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_case_int(int i)
{
	char	*str;
	int		n;

	str = ft_itoa(i);
	n = ft_putstr_count(str);
	free(str);
	return (n);
}
