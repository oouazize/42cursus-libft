/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:25:10 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/12 14:43:50 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char    src[] = "G";
    printf("%c\n", ft_tolower(*src));
    printf("%c\n", tolower(*src));
}*/
