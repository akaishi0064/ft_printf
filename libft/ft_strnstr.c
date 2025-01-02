/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:29:08 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:54:36 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <bsd/string.h>

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_strnstr(const char *str, const char *lang, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && n == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == lang[j] && str[i + j] != '\0' && i + j < n)
		{
			j++;
		}
		if (j == ft_strlen(lang))
		{
			return ((char *)str + i);
		}
		i++;
	}
	if ((str[0] == '\0') && (lang[0] == '\0'))
		return ((char *)str + i);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "42 1337 Network 2021 piscine block chain";
// 	char	find1[] = "piscine";
// 	char	str2[] = "";
// 	char	find2[] = "";
// 	printf("%s\n", ft_strnstr(str1, find1, 40));
// 	printf("%s\n", strnstr(str1, find1, 40));
// 	printf("%s\n", ft_strnstr(str2, find2, 40));
// 	printf("%s\n", strnstr(str2, find2, 40));
// 	return (0);
// }
