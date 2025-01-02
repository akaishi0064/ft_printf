/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:05:42 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:49:10 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	f(unsigned int i, char *str)
// {
// 	int	a;
// 	a = 0;
// 	if (i % 2 == 0)
// 	{
// 		while (str[a])
// 		{
// 			if (str[a] >= 'a' && str[a] <= 'z')
// 				str[a] -= 32;
// 			a++;
// 		}
// 	}
// 	else
// 	{
// 		while (str[a])
// 		{
// 			if (str[a] >= 'A' && str[a] <= 'Z')
// 				str[a] += 32;
// 			a++;
// 		}
// 	}
// }
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "Hello world!";
// 	ft_striteri(str, &f);
// 	printf("Modified string: %s\n", str);
// 	return (0);
// }
