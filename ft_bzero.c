/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:40:35 by yiken             #+#    #+#             */
/*   Updated: 2023/11/14 13:13:01 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, 0, n);
}

/*
int main()
{
	unsigned char myarray[6] = "jackma";
	int i;
	ft_memset(myarray, 't', 3);
	ft_bzero(myarray + 3, 3);
	printf("%s\n", myarray);
	for (i = 0; i < (int)(sizeof(myarray) / sizeof(unsigned char)); i++)
		printf("%c", myarray[i]);
}
*/
