/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:29:44 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/19 12:59:00 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <limits.h>
// #include <stdio.h>
// int	ft_isdigit(int c)
// {
// 	if (c >= '0' && c <= '9')
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

static int	ft_skipspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f'
		|| c == '\v')
		return (1);
	return (0);
}

static long	max_atoi(const char *str)
{
	long int	result;
	long int	l_divis;
	char		l_remain;

	result = 0;
	l_divis = LONG_MAX / 10;
	l_remain = LONG_MAX % 10 + '0';
	while (ft_isdigit(*str))
	{
		if (l_divis < result || (l_divis == result && l_remain < *str))
			return (LONG_MAX);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

static long	min_atoi(const char *str)
{
	long int	result;
	long int	l_divis;
	char		l_remain;

	result = 0;
	l_divis = LONG_MIN / 10;
	l_remain = (LONG_MIN % 10 * -1) + '0';
	while (ft_isdigit(*str))
	{
		if (l_divis > result || (l_divis == result && l_remain < *str))
			return (LONG_MIN);
		result = result * 10 - (*str - '0');
		str++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		flag;
	long	nbr;

	i = 0;
	flag = 0;
	nbr = 0;
	while (ft_skipspace(*str) == 1)
		str++;
	if (*str == '-')
	{
		str++;
		return ((int)min_atoi(str));
	}
	else if (*str == '+')
		str++;
	return ((int)max_atoi(str));
}

// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// void	test_ft_atoi_vs_atoi(const char *input)
// {
// 	int	result_ft;
// 	int	result_atoi;
// 	result_ft = ft_atoi(input);
// 	result_atoi = atoi(input);
// 	if (result_ft == result_atoi)
// 	{
// 		printf("PASS: Input \"%s\" -> ft_atoi %d, atoi %d\n", input, result_ft,
// 			result_atoi);
// 	}
// 	else
// 	{
// 		printf("FAIL: Input \"%s\" -> ft_atoi %d, atoi %d\n", input, result_ft,
// 			result_atoi);
// 	}
// }
// int	main(void)
// {
// 	test_ft_atoi_vs_atoi("123");
// 	test_ft_atoi_vs_atoi("-123");
// 	test_ft_atoi_vs_atoi("   123");
// 	test_ft_atoi_vs_atoi("   -123");
// 	test_ft_atoi_vs_atoi("   +123");
// 	test_ft_atoi_vs_atoi("   +123abc");
// 	test_ft_atoi_vs_atoi("   -123abc");
// 	test_ft_atoi_vs_atoi("2147483647");  // INT_MAX
// 	test_ft_atoi_vs_atoi("-2147483648"); // INT_MIN
// 	test_ft_atoi_vs_atoi("2147483648");
// 	//  Overflow, expected to return INT_MAX
// 	test_ft_atoi_vs_atoi("-2147483649");
// 	//  Underflow, expected to return INT_MIN
// 	// return (0);
// 	printf("%d %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
// 	printf("%d %d\n", atoi("-2147483649"), ft_atoi("-2147483649"));
// 	printf("%d %d\n", atoi("-2147483650"), ft_atoi("-2147483650"));
// 	printf("%d %d\n", atoi("-2147483651"), ft_atoi("-2147483651"));
// 	printf("%d %d\n", atoi("-009"), ft_atoi("-009"));
// }
// int	main(void)
// {
// 	printf("atoi\n");
// 	printf("LLMAX    :%d\n", atoi("9223372036854775807"));
// 	printf("LLMAX+1    :%d\n", atoi("9223372036854775808"));
// 	printf("LLMIN    :%d\n", atoi("-9223372036854775808"));
// 	printf("LLMIN-1    :%d\n", atoi("-9223372036854775809"));
// 	printf("LLMIN+1    :%d\n", atoi("-9223372036854775807"));
// 	printf("\nft_atoi\n");
// 	printf("LLMAX    :%d\n", ft_atoi("9223372036854775807"));
// 	printf("LLMAX+1    :%d\n", ft_atoi("9223372036854775808"));
// 	printf("LLMIN    :%d\n", ft_atoi("-9223372036854775808"));
// 	printf("LLMIN-1    :%d\n", ft_atoi("-9223372036854775809"));
// }
