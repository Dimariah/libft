/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:57:27 by yiken             #+#    #+#             */
/*   Updated: 2023/11/18 13:30:21 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", sizeof(char));
		nb = -nb;
	}
	if (nb < 10)
	{
		c = '0' + nb;
		write(fd, &c, sizeof(char));
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

// int main()
// {
// 	int fd = open("./myfile.txt", O_CREAT | O_RDWR | O_TRUNC);
// 	if (fd == - 1)
// 		return (0);
// 	ft_putnbr_fd(-2147483648, fd);
// 	close(fd);
// 	return (0);
// }