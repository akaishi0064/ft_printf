/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:52:43 by chakaish          #+#    #+#             */
/*   Updated: 2025/01/24 16:26:19 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			num;

	if (!input)
		return (-1);
	num = 0;
	save = ft_strdup(input);
	if (!save)
		return (0);
	va_start(args, input);
	num = ft_count_output(save, args);
	va_end(args);
	free((char *)save);
	return (num);
}

int	ft_count_output(const char *save, va_list args)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			c += ft_case_something(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			c++;
		}
		if (!save[i])
			return (c);
		i++;
	}
	return (c);
}

int	ft_case_something(int c, va_list args)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = ft_case_char(va_arg(args, int));
	else if (c == 's')
		n = ft_case_string(va_arg(args, char *));
	else if (c == 'p')
		n = ft_case_pointer((unsigned long long)va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		n = ft_case_int(va_arg(args, int));
	else if (c == 'u')
		n = ft_case_unint((unsigned long long)va_arg(args, unsigned long long));
	else if (c == 'x')
		n = ft_case_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		n = ft_case_hexa(va_arg(args, unsigned int), 2);
	else if (c == '%')
		n = ft_putstr_count("%");
	else if (c != '\0')
	{
		ft_putchar_fd(c, 1);
		n++;
	}
	return (n);
}
