/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:25:19 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/12 14:20:19 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = s;
	while (i < n)
	{
		src[i] = '\0';
		i++;
	}
}
/*#include <string.h>
int main()
{
    char str[] = "oussama";
    int n = 4;
    ft_bzero(str, n);
    bzero(str, n);
}*/
