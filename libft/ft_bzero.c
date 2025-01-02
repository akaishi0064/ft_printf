/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:18:08 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:37:50 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	int		i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		*a = '\0';
		i++;
		a++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str1[] = "0123456789";
// 	char	str2[] = "0123456789";
// 	ft_bzero(str1 + 4, 5);
// 	bzero(str2 + 4, 5);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	return (0);
// }
