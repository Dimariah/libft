/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:03:28 by yiken             #+#    #+#             */
/*   Updated: 2023/11/22 14:46:52 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

// int main()
// {
// 	int fd = open("./myfile.txt", O_CREAT | O_RDWR | O_TRUNC);
// 	if (fd == -1)
// 		return (0);
// 	ft_putchar_fd(76, fd);
// 	close(fd);
// 	return (0);
// }