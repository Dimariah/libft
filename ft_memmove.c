/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:49:43 by yiken             #+#    #+#             */
/*   Updated: 2023/11/23 18:24:33 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*new_src;
	unsigned char	*new_dst;
	int				diff;
	int				i;

	new_src = src;
	new_dst = dst;
	diff = new_dst - new_src;
	if (diff > 0)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			new_src[i + diff] = new_src[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(new_dst, new_src, len);
	}
	return (dst);
}

/*
int main()
{
    unsigned long i;
    unsigned char myarray[22] = "be water my friend!";
    unsigned char *src = myarray + 6;
    unsigned char *dest = myarray + 3;
    size_t size = sizeof(unsigned char);
	ft_memmove(dest, src, size * 3);
    for (i = 0; i < 5 / size; i++)
    {
        printf("%c", dest[i]);
    }
}
*/
