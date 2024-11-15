/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:04:29 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/12 20:07:04 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	node1 = ft_lstnew(ft_strdup("Hello"));
	node2 = ft_lstnew(ft_strdup("Howdy"));
	node3 = ft_lstnew(ft_strdup("Heyyy"));
	node4 = ft_lstnew(ft_strdup("Hiii"));
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	printf("the size before the clearence : %d\n", ft_lstsize(node1));
	ft_lstclear(&node1, free);
	printf("the size after the clearence : %d\n", ft_lstsize(node1));
	return (0);
}*/
