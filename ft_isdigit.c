/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:11:45 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/12 14:18:44 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char    src[] = "f4";
    printf("%d\n", ft_isdigit(*src));
    printf("%d\n", isdigit(*src));
}*/
