/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:03:50 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/17 10:54:13 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*src;
	size_t	i;

	i = 0;
	src = (char *)str;
	while (i < n)
	{
		if (src[i] == (char)c)
			return (src + i);
		i++;
	}
	return (0);
}
/*#include <string.h>
int main()
{
    char str[] = "oussama";
    int n = 4;
    int al = 's';
    printf("%s\n", ft_memchr(str, al, n));
    printf("%s\n", memchr(str, al, n));
}*/
