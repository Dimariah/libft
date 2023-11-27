/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:49:43 by yiken             #+#    #+#             */
/*   Updated: 2023/11/19 20:18:03 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *hero;

// 	hero = ft_lstnew("this is first");
// 	hero->next = ft_lstnew("this is 2nd");
// 	hero->next->next = ft_lstnew("this is last");
// 	printf("%p", ft_lstlast(0));
// }