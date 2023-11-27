/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:37:57 by yiken             #+#    #+#             */
/*   Updated: 2023/11/21 20:07:22 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void	f(unsigned int i, char *c)
// {
// 	if (*c == 'A')
// 	{
// 		*c += i;
// 	}
// }

// int main()
// {
// 	char str[] = "UAER";
// 	ft_striteri(str, f);
// 	printf("%s", str);
// 	return 0;
// }