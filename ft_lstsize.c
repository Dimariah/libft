/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:32:09 by yiken             #+#    #+#             */
/*   Updated: 2023/11/19 19:45:32 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int main()
// {
// 	t_list *hero = ft_lstnew(ft_strdup("green"));
// 	hero->next = ft_lstnew(ft_strdup("blue"));
// 	printf("%d", ft_lstsize(hero));
// }