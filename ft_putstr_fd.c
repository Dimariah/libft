/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:36:44 by yiken             #+#    #+#             */
/*   Updated: 2023/11/21 20:02:51 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd != -1 && s)
		write(fd, s, ft_strlen(s) * sizeof(char));
}

// int main()
// {
// 	int fd = open("./myfile.txt", O_CREAT | O_RDWR | O_TRUNC);
// 	if (fd == - 1)
// 		return (0);
// 	ft_putstr_fd((void *)0, fd);
// 	close(fd);
// 	return (0);
// }