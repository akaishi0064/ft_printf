/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:27:40 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/25 19:30:47 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

char	*ft_all_lower(char	*c);
char	*ft_base(unsigned long long point, int base);
int		ft_case_char(char c);
int		ft_case_int(int i);
int		ft_case_hexa(unsigned int i, int f);
int		ft_case_pointer(unsigned long long point);
int		ft_case_string(char	*str);
int		ft_case_unint(unsigned int unint);
int		ft_printf(const char	*input, ...);
int		ft_count_out(const char	*save, va_list args);
int		ft_case_something(int c, va_list args);
int		ft_putstr_count(char *c);

#endif
