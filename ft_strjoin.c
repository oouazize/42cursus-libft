/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:44:11 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/13 19:02:02 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_alloc(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		lens;
	char	*s12;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	lens = len1 + len2;
	s12 = (char *)malloc((lens + 1) * sizeof(char));
	return (s12);
}

static char	*ft_strcp(char *s12, char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		s12[i] = s1[i];
		i++;
	}
	while (s2[j])
		s12[i++] = s2[j++];
	s12[i] = '\0';
	return (s12);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	n;
	char	*s12;

	i = 0;
	j = 0;
	n = 0;
	if (!s1 || !s2)
		return (0);
	while (n < ft_strlen(s1))
	{
		if (s2 == s1 + n)
			return ((char *)s1);
		n++;
	}
	s12 = ft_alloc(s1, s2);
	if (s12 == NULL)
		return (NULL);
	s12 = ft_strcp(s12, s1, s2);
	return (s12);
}
/*int main()
{
	char *s1 = "my favorite animal is ";
	char *s2 = s1 + 20;
	printf("%s", ft_strjoin(s1, s2));
}*/
