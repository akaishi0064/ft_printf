/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:17:17 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:44:53 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[] = "0123456\0789";
// 	printf("%s\n", (char *)ft_memset(str, '*', 10));
// 	printf("%s\n", (char *)memset(str, '*', 10));
// 	return (0);
// }
