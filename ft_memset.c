/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:51:56 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/17 20:09:44 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = str;
	while (i < n)
	{
		src[i] = c;
		i++;
	}
	return (src);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char    str[] = "Oussama is the best student here";
//     int n = 7;
//     char al = 'Z';
//     printf("%s\n", ft_memset(str, al, n));
//     printf("%s\n", memset(str, al, n));
// }
// int main()
// {
//     int a[] = {12, 32 , 13, 5, 3, 5};
//     ft_memset(a, 0, 4);
//     int i = 0;
//     while (i < 4)
//     {
//         printf("%d\n", a[i]);
//         i++;
//     }
// }
