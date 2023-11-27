/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:43:53 by yiken             #+#    #+#             */
/*   Updated: 2023/11/21 20:06:00 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

// void	del(void *content)
// {
// 	free(content);
// 	content = 0;
// }

// int main()
// {
// 	t_list *hero = ft_lstnew(ft_strdup("hello"));
// 	ft_lstdelone((void *)0, del);
// 	printf("%s", hero->content);
// }