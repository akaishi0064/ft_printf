/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:35:33 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 18:17:48 by chakaish         ###   ########.fr       */
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
// 	{
// 		i++;
// 	}
// 	return (i);
// }
static void	ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(const char *str)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (a == NULL)
		return (NULL);
	ft_strcpy(a, str);
	return (a);
}

// int	main(void)
// {
// 	char	*string;
// 	char	*string1;
// 	char	*newstr;
// 	char	*newstr1;
// 	string = "this is a copy";
// 	string1 = "this is a copy";
// 	if ((newstr = ft_strdup(string)) != NULL)
// 		printf("The new string is: %s\n", newstr);
// 	if ((newstr1 = strdup(string1)) != NULL)
// 		printf("The new string is: %s\n", newstr1);
// 	return (0);
// }
