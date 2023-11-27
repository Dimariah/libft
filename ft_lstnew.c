/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiken <yiken@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:42:51 by yiken             #+#    #+#             */
/*   Updated: 2023/11/18 19:35:01 by yiken            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;
	t_list	my_node;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (0);
	my_node.content = content;
	my_node.next = 0;
	*ptr = my_node;
	return (ptr);
}

// int main()
// {
// 	char *str = "hello world";
// 	t_list *mynode = ft_lstnew(str);
// 	printf("%s, %p", mynode -> content, mynode -> next);
// 	free(mynode);
// }