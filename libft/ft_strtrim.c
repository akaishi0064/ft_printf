/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:56:55 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:55:56 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdlib.h>
// #include <string.h>
// static size_t	ft_strlen(const char *str)
// {
// 	size_t	i;
// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }
// static char	*ft_strchr(const char *s, int c)
// {
// 	int	i;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			return ((char *)s + i);
// 		}
// 		i++;
// 	}
// 	return (0);
// }
// static char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;
// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	i--;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			return ((char *)s + i);
// 		}
// 		i--;
// 	}
// 	return (0);
// }
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*t;
// 	size_t			i;
// 	unsigned int	k;

// 	t = NULL;
// 	if (s == NULL)
// 		return (t);
// 	k = ft_strlen(s);
// 	if (k < start)
// 		len = 0;
// 	if ((k - start) < len)
// 		len = k - start;
// 	t = (char *)malloc(sizeof(char) * (len + 1));
// 	if (t)
// 	{
// 		i = 0;
// 		while (len-- && s[start + i])
// 		{
// 			t[i] = s[start + i];
// 			i++;
// 		}
// 		t[i] = '\0';
// 	}
// 	return (t);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*t;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	if (set != NULL)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
	}
	i = ft_strlen(s1);
	if (set != NULL)
	{
		while (0 < i && ft_strrchr(set, s1[i - 1]))
			i--;
	}
	t = ft_substr(s1, 0, i);
	if (t == NULL)
		return (NULL);
	return (t);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s1[] = "hello world";
// 	char	set[] = "world";
// 	char	*trimmed_str;
// 	trimmed_str = ft_strtrim(s1, set);
// 	printf("%s\n", trimmed_str);
// 	free(trimmed_str);
// 	return (0);
// }
