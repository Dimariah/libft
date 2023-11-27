/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:38:54 by yiken             #+#    #+#             */
/*   Updated: 2023/11/21 16:21:06 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && *lst && del)
	{
		if ((*lst)->next)
			ft_lstclear(&(*lst)->next, del);
		ft_lstdelone(*lst, del);
		*lst = 0;
	}
}

// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *lst = ft_lstnew(ft_strdup("first"));
// 	lst->next = ft_lstnew(ft_strdup("second"));

// 	ft_lstclear(&lst, del);
// 	printf("%p", lst);
// }