/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:04:25 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/10 16:57:10 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("Howdy");
	t_list *node3 = ft_lstnew("Hi");
	t_list *node4 = ft_lstnew("Hey");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	printf("the size before : %d\n", ft_lstsize(node1));
	ft_lstadd_front(&node1, node4);
	printf("the size after : %d\n", ft_lstsize(node4));

	return (0);
}*/
