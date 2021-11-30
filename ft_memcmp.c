/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:30:25 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/17 11:18:42 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dest;

	i = 0;
	src = (unsigned char *)str1;
	dest = (unsigned char *)str2;
	while (i < n && src[i] == dest[i])
		i++;
	if (!n)
		return (0);
	if (i == n && n > 0 && src[n - 1] == dest[n - 1])
		return (0);
	return (src[i] - dest[i]);
}
/*#include <string.h>
int main()
{
    char dst[] = "oussama";
    int n = 7;
    printf("%d\n", ft_memcmp(((void *)0), dst, n));
    printf("%d\n", memcmp(((void *)0), dst, n));
	return (0);
}*/
