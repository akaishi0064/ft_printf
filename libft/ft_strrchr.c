/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:26:40 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:54:56 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;
// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s) + 1;
	s += ft_strlen(s);
	while (i > 0)
	{
		if (*s == (char)c || *s == c - 256 || *s == c + 256)
			return ((char *)s);
		i--;
		s--;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[20] = "libft-test-tokyo";
// 	char	*p;
// 	p = ft_strrchr(test, 't' - 256);
// 	printf("Display after search character pointer: %s\n", p);
// 	p = ft_strrchr(test, 't' - 256);
// 	printf("Display after search character pointer: %s\n", p);
// 	return (0);
// }
