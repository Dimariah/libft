/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:09:26 by yiken             #+#    #+#             */
/*   Updated: 2023/11/19 19:25:07 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *mynode = ft_lstnew(ft_strdup("hello world"));
// 	t_list *mynode1 = ft_lstnew(ft_strdup("inside outside"));
// 	t_list *hero;
// 	ft_lstadd_front(&mynode, mynode1);
// 	hero = mynode1;
// 	while (hero){
// 		printf("%s\n", hero->content);
// 		hero = hero->next;
// 	}
// }