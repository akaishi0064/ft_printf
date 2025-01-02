/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:59:16 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:46:49 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

static char	**free_strings(char **string, size_t i)
{
	while (i > 0)
	{
		i--;
		free(string[i]);
	}
	free(string);
	return (0);
}

static size_t	word_count(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	copy_word(char *word, const char *s, size_t word_e, size_t word_len)
{
	size_t	i;

	i = 0;
	while (word_len > 0)
	{
		word[i] = s[word_e - word_len];
		i++;
		word_len--;
	}
	word[i] = '\0';
	return ;
}

static char	**words_split(const char *s, char c, char **new_strings,
		size_t word_len)
{
	size_t	i;
	size_t	word;
	size_t	word_l;

	i = 0;
	word = 0;
	word_l = 0;
	while (word < word_len)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_l++;
		}
		new_strings[word] = (char *)malloc(sizeof(char) * (word_l + 1));
		if (!new_strings)
			return (free_strings(new_strings, word));
		copy_word(new_strings[word], s, i, word_l);
		word_l = 0;
		word++;
	}
	new_strings[word] = 0;
	return (new_strings);
}

char	**ft_split(char const *str, char c)
{
	char	**strings;
	size_t	word_len;

	if (!str)
		return (0);
	word_len = word_count(str, c);
	strings = (char **)malloc(sizeof(char *) * (word_len + 1));
	if (!strings)
		return (0);
	strings = words_split(str, c, strings, word_len);
	return (strings);
}

// int	main(void)
// {
// 	char const	*str;
// 	char		delimiter;
// 	char		**splitstrings;
// 	size_t		i;
// 	str = "Hello, world! This is a test string. ";
// 	delimiter = ' ';
// 	splitstrings = ft_split(str, delimiter);
// 	if (splitstrings != NULL)
// 	{
// 		i = 0;
// 		while (splitstrings[i] != NULL)
// 		{
// 			printf("Split strings [%zu]: %s\n", i, splitstrings[i]);
// 			free(splitstrings[i]);
// 			i++;
// 		}
// 		free(splitstrings);
// 	}
// 	else
// 		printf("Failed to split string.\n");
// 	return (0);
// }
