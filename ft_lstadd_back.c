/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:40:57 by yiken             #+#    #+#             */
/*   Updated: 2023/11/20 13:07:40 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

// int main()
// {
// 	t_list *lst = ft_lstnew(ft_strdup("first"));
// 	lst->next = ft_lstnew(ft_strdup("second"));
// 	lst->next->next = ft_lstnew(ft_strdup("last"));

// 	t_list *new = ft_lstnew(ft_strdup("new last"));
// 	ft_lstadd_back(&lst, new);
// 	while(lst)
// 	{
// 		printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// }