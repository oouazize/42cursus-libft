/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:50:46 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/18 11:42:43 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			j;
	char			*str;
	unsigned int	count;

	j = 0;
	if (!s)
		return (0);
	count = ft_strlen(s);
	if (count < start)
		return (ft_strdup(""));
	if (len >= count)
		len = count - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[start] && len && start < count)
	{
		str[j] = s[start];
		start++;
		j++;
		len--;
	}
	str[j] = '\0';
	return (str);
}
/*#include <stdio.h>
int main()
{
	char s[] = "tripouille";
	printf("%s\n", ft_substr("tripouille", 100, 1));
}*/
