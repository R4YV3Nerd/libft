/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:04:32 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/16 09:37:25 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("Hello"));
	t_list *node2 = ft_lstnew(ft_strdup("Heyyy"));
	t_list *node3 = ft_lstnew(ft_strdup("Howdy"));
	t_list *node4 = ft_lstnew(ft_strdup("Hiii"));

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	printf("the size before : %d\n", ft_lstsize(node1));

	node1->next = node2->next;
	ft_lstdelone(node2, free);

	printf("the size after : %d\n", ft_lstsize(node1));

	t_list *temp = node1;
	while(temp)
	{
		t_list *next = temp->next;
		ft_lstdelone(temp, free);
		temp = next;
	}
}*/
