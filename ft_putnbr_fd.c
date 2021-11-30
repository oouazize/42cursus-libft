/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:30:48 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/11 17:24:00 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	chr;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		n *= -1;
		write(fd, "-", 1);
	}
	chr = n % 10 + '0';
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &chr, 1);
}
/*int main()
{
	int	fd;
	int	n;

	n = -1337;
	fd = open("test4.txt", O_WRONLY | O_CREAT);
	ft_putnbr_fd(n, fd);
	close(fd);
}*/
