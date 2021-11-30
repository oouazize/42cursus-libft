/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:10:28 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/18 12:49:09 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		j;
	char	*ptr;

	j = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (j < len)
	{
		ptr[j] = (*f)(j, s[j]);
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*char	*f(unsigned int i, char c)
{
	return (c = 's');
}
int main()
{
	printf("%s", ft_strmapi("youssef", f));
}*/
