/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:01:23 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:53:50 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// static size_t	ft_strlen(const char *str)
// {
// 	size_t	i;
// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	if (s == NULL)
		return (NULL);
	d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = f(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}

// static char	f(unsigned int a, char c)
// {
// 	if (a % 2 == 0)
// 	{
// 		if (c >= 'a' && c <= 'z')
// 			c -= 32;
// 	}
// 	else
// 	{
// 		if (c >= 'A' && c <= 'Z')
// 			c += 32;
// 	}
// 	return (c);
// }
// int	main(void)
// {
// 	char	*original;
// 	char	*result;
// 	original = "hello";
// 	// 関数を適用して新しい文字列を取得
// 	result = ft_strmapi(original, &f);
// 	printf("Original string: %s\n", original);
// 	printf("Modified string: %s\n", result);
// 	free(result);
// 	return (0);
// }
