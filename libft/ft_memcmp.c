/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:28:45 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:43:54 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*st1;
	const unsigned char	*st2;

	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	buf1[] = "ABC\0DEFGH";
// 	char	buf2[] = "ABC\0DEFGH";
// 	printf("%d\n", ft_memcmp(buf1, buf2, 9));
// 	printf("%d\n", memcmp(buf1, buf2, 9));
// 	if (memcmp(buf1, buf2, 9) == 0)
// 	{
// 		puts("matching");
// 	}
// 	else
// 	{
// 		puts("No match");
// 	}
// 	return (0);
// }
