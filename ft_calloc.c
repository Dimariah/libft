/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:23:29 by yiken             #+#    #+#             */
/*   Updated: 2023/11/27 16:28:17 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	t_size;

	// if ((int) count < 0 || (int) size <  0)
	// 	return (0);
	t_size = count * size;
	ptr = malloc(t_size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, t_size);
	return (ptr);
}

// int main()
// {
// 	size_t i = 0;
// 	char	*block = (char *)ft_calloc(-1, -1);
// 		printf("%s", block);
// 	free(block);
// }