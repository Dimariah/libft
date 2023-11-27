/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:30:45 by yiken             #+#    #+#             */
/*   Updated: 2023/11/23 17:34:08 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_src;
	unsigned char	*new_dst;

	if (dst == src)
		return (0);
	i = 0;
	new_src = (unsigned char *)src;
	new_dst = (unsigned char *)dst;
	while (i < n)
	{
		ft_memset(&new_dst[i], new_src[i], sizeof(unsigned char));
		i++;
	}
	return (dst);
}

// int main()
// {
// 	unsigned char my_src[] = "antonio ev";
// 	size_t size = sizeof(my_src);
// 	unsigned char my_dst[] = "hello everyone!";
// 	memcpy(0, 0, 5);
// 	size_t	i;
// 	for (i = 0; i < sizeof(my_dst); i++)
// 		printf("%c", my_dst[i]);
// }