/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:04:22 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/11 19:49:42 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

/*int main()
{
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("Hi");
	t_list *node3 = ft_lstnew("Howdy");
	t_list *node4 = ft_lstnew("Hey");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	printf("the size before adding the last : %d\n", ft_lstsize(node1));

	ft_lstadd_back(&node1, node4);

	printf("the size after adding the last : %d\n", ft_lstsize(node1));
}*/
