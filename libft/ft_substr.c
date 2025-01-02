/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:55:20 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:56:38 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*t;
	size_t			i;
	unsigned int	k;

	t = NULL;
	if (s == NULL)
		return (t);
	k = ft_strlen(s);
	if (k < start)
		len = 0;
	if ((k - start) < len)
		len = k - start;
	t = (char *)malloc(sizeof(char) * (len + 1));
	if (t)
	{
		i = 0;
		while (len-- && s[start + i])
		{
			t[i] = s[start + i];
			i++;
		}
		t[i] = '\0';
	}
	return (t);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*dest1;
// 	s = "libft-test-tokyo";
// 	dest1 = ft_substr(s, 6, 4);
// 	printf("%s\n", dest1);
// 	dest1 = ft_substr(s, 11, 5);
// 	printf("%s\n", dest1);
// 	dest1 = ft_substr(s, 16, 5);
// 	printf("%s\n", dest1);
// 	return (0);
// }
