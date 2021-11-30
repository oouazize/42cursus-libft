/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:31:52 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/18 11:22:26 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	len;
	size_t	i;
	size_t	d;

	count = 0;
	len = 0;
	i = 0;
	d = 0;
	while (src[len])
		len++;
	count = ft_strlen(dst);
	d = ft_strlen(dst);
	if (dstsize <= count)
		return (dstsize + len);
	while (src[i] && count < dstsize - 1)
		dst[count++] = src[i++];
	dst[count] = '\0';
	return (d + len);
}
/*#include <string.h>
int main()
{
    char src[] = "cdhszvbfsdlszjcshzcsdz";
    char dest[15];
    printf("%zu\n", ft_strlcat(dest, src, 5));
    printf("%zu\n", strlcat(dest, src, 5));
}*/
