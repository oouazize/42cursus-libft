/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:16:15 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/18 11:28:47 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*src;

	src = (char *)s;
	i = ft_strlen(src);
	if (!c)
		return (src + i);
	while (--i >= 0)
	{
		if (src[i] == (char)c)
			return (src + i);
	}
	return (0);
}
