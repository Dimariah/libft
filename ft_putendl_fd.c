/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:48:12 by yiken             #+#    #+#             */
/*   Updated: 2023/11/21 20:04:31 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd != -1 && s)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", sizeof(char));
	}
}

// int main()
// {
// 	int fd = open("./myfile.txt", O_CREAT | O_RDWR | O_TRUNC);
// 	if (fd == - 1)
// 		return (0);
// 	ft_putendl_fd("what is real cannot be threatened", fd);
// 	close(fd);
// 	return (0);
// }