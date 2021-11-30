/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:14:07 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/19 11:41:49 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_counter(char const *s, char c)
{
	int	word;
	int	i;

	word = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		i = ft_word(s, c);
		s += i;
		if (i > 0)
			word++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		string;
	int		count;
	int		len;
	char	**tab;

	if (!s)
		return (0);
	string = ft_counter(s, c);
	tab = (char **)malloc((string + 1) * sizeof(char *));
	if (!tab)
		return (0);
	count = -1;
	while (++count < string)
	{
		while (*s && *s == c)
			s++;
		len = ft_word(s, c);
		tab[count] = (char *)malloc((len + 1) * sizeof(char));
		if (!tab[count])
			return (0);
		ft_strlcpy(tab[count], s, len + 1);
		s += len;
	}
	tab[string] = 0;
	return (tab);
}
/*int main()
{
    int i = 0;
	char **tab = NULL;
	tab = ft_split("  tripouille  42	", ' ');
    while(tab[i])
	    printf("%s\n", tab[i++]);
	return (0);
}*/
