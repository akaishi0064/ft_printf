/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:30:32 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:41:52 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// void	ft_bzero(void *s, int n)
// {
// 	int	i;
// 	int	*a;
// 	a = (int *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		*a = 0;
// 		i++;
// 		a++;
// 	}
// }

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n > 0 && size > 0 && SIZE_MAX / size < n)
		return (NULL);
	ptr = (void *)malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*array1;
// 	int	i;
// 	int	*array2;
// 	int	j;
// 	// Check if memory allocation was successful
// 	array1 = (int *)calloc(5, sizeof(int));
// 	i = 0;
// 	if (array1)
// 	{
// 		while (i < 5)
// 		{
// 			// This should print "0 0 0 0 0 "
// 			printf("%d", array1[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(array1);
// 	}
// 	else
// 		printf("Memory allocation failed\n");
// 	// Check if memory allocation was successful
// 	array2 = (int *)ft_calloc(5, sizeof(int));
// 	j = 0;
// 	if (array2)
// 	{
// 		while (j < 5)
// 		{
// 			// This should print "0 0 0 0 0 "
// 			printf("%d", array2[i]);
// 			j++;
// 		}
// 		printf("\n");
// 		free(array2);
// 	}
// 	else
// 		printf("Memory allocation failed\n");
// 	return (0);
// }
