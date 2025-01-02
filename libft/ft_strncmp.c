/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:27:31 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:54:15 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && 0 < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <string.h>
// #include <limits.h>
// int main(void)
// {
// 	char test1[10] = "LiBft";
// 	char test2[10] = "Libft";
// 	//test1とtest2の文字列を先頭から5文字比較
// 	if(ft_strncmp(test1,test2,5)==0){
// 		puts("String is matched");
// 	}else{
// 		puts("String is not matched");
// 	}
// 	//test1とtest2の文字列を先頭から３文字比較
// 	if(strncmp(test1,test2,3)==0){
// 		puts("String is matched");
// 	}else{
// 		puts("String in not matched");
// 	}
// 	return (0);
// }
