/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:19:40 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 18:38:39 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	i[] = "abcdefghij";
// 	char	j[] = "123";
// 	printf("%zu\n", ft_strlcpy(i, j, 8));
// 	printf("%s\n%s\n", i, j);
// 	printf("%zu\n", strlcpy(i, j, 8));
// 	printf("%s\n%s\n", i, j);
// 	return (0);
// }
