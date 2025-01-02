/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:00:32 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:42:54 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <limits.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

static int	digit_len(long i)
{
	int	j;

	if (i == 0)
		i++;
	j = 0;
	while (1 <= i)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

static long	power(int base, int exponent)
{
	if (exponent == 0)
		return (1);
	else
		return (base * power(base, exponent - 1));
}

static void	digit_copy(int sign, char *t, long i)
{
	int	j;
	int	digit;

	j = 0;
	digit = digit_len(i);
	if (sign)
		t[j++] = '-';
	while (0 < digit)
	{
		t[j++] = (i / power(10, digit - 1)) % 10 + '0';
		digit--;
	}
	t[j] = '\0';
}

char	*ft_itoa(int n)
{
	int		sign;
	long	i;
	char	*t;

	sign = 0;
	i = (long)n;
	if (i < 0)
	{
		i *= -1;
		sign = 1;
	}
	if (sign)
		t = (char *)malloc(digit_len(i) * sizeof(char) + 2);
	else
		t = (char *)malloc(digit_len(i) * sizeof(char) + 1);
	if (t == NULL)
		return ((char *)0);
	digit_copy(sign, t, i);
	return (t);
}

// void	test_ft_itoa_vs_itoa(int num)
// {
// 	char	*str_ft;
// 	char	str_itoa[32];
// 	str_ft = ft_itoa(num);
// 	sprintf(str_itoa, "%d", num);
// 	printf("Input: %d\n", num);
// 	printf("ft_itoa: %s\n", str_ft);
// 	printf("itoa: %s\n", str_itoa);
// 	if (strcmp(str_ft, str_itoa) == 0)
// 	{
// 		printf("PASS\n");
// 	}
// 	else
// 	{
// 		printf("FAIL\n");
// 	}
// 	free(str_ft);
// }
// int	main(void)
// {
// 	test_ft_itoa_vs_itoa(0);
// 	test_ft_itoa_vs_itoa(123);
// 	test_ft_itoa_vs_itoa(-456);
// 	test_ft_itoa_vs_itoa(INT_MAX);
// 	test_ft_itoa_vs_itoa(INT_MIN);
// 	return (0);
// }
