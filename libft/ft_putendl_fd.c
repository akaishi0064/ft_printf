/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:13:53 by chakaish          #+#    #+#             */
/*   Updated: 2024/12/15 17:45:17 by chakaish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
	{
		write(fd, "\0", 1);
		return ;
	}
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
	i++;
}

// int	main(void)
// {
// 	char	str[] = "ABCDEFGHIJKL";
// 	ft_putendl_fd(str, 1);
// 	return (0);
// }
