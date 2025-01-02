/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:18:38 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:44:10 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	if (!dest && !src)
		return (0);
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	buf1[] = "ABCDEFG";
// 	char	buf2[] = "ABCDEFG";
// 	char	bufa[] = "1234";
// 	char	bufb[] = "1234";
// 	ft_memcpy(buf1 + 3, bufa, 4);
// 	memcpy(buf2 + 3, bufb, 4);
// 	printf("String after copy:%s\n", buf1);
// 	printf("String after copy:%s\n", buf2);
// 	return (0);
// }
