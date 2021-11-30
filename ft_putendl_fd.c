/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:55:54 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/13 18:50:52 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = ft_strlen(s);
	write (fd, s, i);
	write (fd, "\n", 1);
}
/*int main()
{
	int fd;
	fd = open("test3.txt", O_WRONLY | O_CREAT);
	ft_putendl_fd("Oussama", fd);
	close(fd);
}*/
