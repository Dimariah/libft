/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:33:18 by yiken             #+#    #+#             */
/*   Updated: 2023/11/21 15:47:47 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// void	f(void *content)
// {
// 	free(content);
// 	content = ft_strdup("new");
// }

// int main()
// {
// 	t_list *lst = ft_lstnew(ft_strdup("old"));
// 	lst->next = ft_lstnew(ft_strdup("old"));
// 	ft_lstiter(lst, f);
// 	while (lst)
// 	{
// 		printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// }