/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:38:03 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/17 11:26:20 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dst;

	i = 0;
	if (!dest && !src)
		return (NULL);
	source = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (i < count)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}
/*
#include <string.h>
int main()
{
	char src[] = "            ";
	char buff1[22];
	int n = 22;
    //printf("ft_memcpy = %lu\n", strlen(ft_memcpy(buff1, src, n)));
    printf("memcpy = %s\n", ft_memcpy("", src, 0));
}
*/
