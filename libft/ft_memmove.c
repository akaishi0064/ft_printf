/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:19:12 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:44:34 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*s;

	dst = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (dst < s)
	{
		while (n--)
		{
			*dst++ = *s++;
		}
	}
	else if (dst > s)
	{
		dst += (n - 1);
		s += (n - 1);
		while (n--)
			*dst-- = *s--;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	buf1[] = "ABCDEFG";
// 	char	buf2[] = "ABCDEFG";
// 	ft_memmove(buf1 + 1, buf1, 5);
// 	printf("%s\n", buf1);
// 	memmove(buf2 + 1, buf2, 5);
// 	printf("%s\n", buf2);
// 	return (0);
// }
