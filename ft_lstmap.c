/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:50:32 by yiken             #+#    #+#             */
/*   Updated: 2023/11/23 12:57:13 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*hero;

	if (!lst || !f || !del)
		return (0);
	new = 0;
	while (lst)
	{
		hero = ft_lstnew(0);
		if (!hero)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		hero->content = f(lst->content);
		ft_lstadd_back(&new, hero);
		lst = lst->next;
	}
	return (new);
}

// void	del(void *content)
// {
// 	free(content);
// }

// void	*f(void *content)
// {
// 	int	i = 0;
// 	char	*str = (char *)content;
// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	return (str);
// }

// int main()
// {
// 	t_list *lst = ft_lstnew(ft_strdup("first"));
// 	lst->next = ft_lstnew(ft_strdup("second"));
// 	lst->next->next = ft_lstnew(ft_strdup("third"));
// 	t_list *hero = ft_lstmap(lst, f, del);
// 	while (hero)
// 	{
// 		printf("%s\n", hero->content);
// 		hero = hero->next;
// 	}
// 	free(lst);
// 	free(hero);
// }