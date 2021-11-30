/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:40:24 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/12 14:22:02 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(count * size);
	if (p == NULL)
		return (0);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
/*int main()
{
	int n = 4;
	printf("%s", ft_calloc(n,sizeof(char)));
	printf("%s", calloc(n,sizeof(char)));
}*/
