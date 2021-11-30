/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:45:48 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/18 11:40:36 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		len;
	int		i;
	char	*src;

	len = 0;
	i = 0;
	src = (char *)s;
	while (src[len])
		len++;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*int main()
{
    char str[] = "oussama";
    printf("%s", ft_strdup(str));
}*/
