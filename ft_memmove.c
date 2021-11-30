/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:31:35 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/12 14:30:26 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	dst = (char *)str1;
	src = (char *)str2;
	if (!str1 && !str2)
		return (NULL);
	if (src > dst)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			dst[n] = src[n];
	return (dst);
}
/*int main()
{
	char str[] = "abcde";
	char dst[] = "abcde";
	int n = 4;
	printf("%s\n", ft_memmove(dst, str + 1, n));
	printf("%s", memmove(dst, str + 1, n));
}*/
