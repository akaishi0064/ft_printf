/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:28:05 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:43:23 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t				i;
	unsigned const char	*a;
	void				*s2;

	a = (unsigned const char *)s1;
	s2 = (void *)s1;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return (s2);
		}
		i++;
		s2++;
	}
	return (0);
}

// #include <limits.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "abcdef\0ghij";
// 	char	str2[] = "abcdef\0ghij";
// 	char	*p1;
// 	char	*p2;
// 	p1 = ft_memchr(str1, 'h' + 256, INT_MAX);
// 	printf("The search character is %ld character of the string\n", p1 - str1);
// 	p2 = ft_memchr(str2, 'h' + 256, INT_MAX);
// 	printf("The search character is %ld character of the string\n", p2 - str2);
// 	return (0);
// }
