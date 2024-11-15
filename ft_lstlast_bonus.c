/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:04:37 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/13 01:11:12 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("World");
	t_list *node3 = ft_lstnew("42");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	printf("the size is : %d\n", ft_lstsize(node1));

	t_list *last_node = ft_lstlast(node1);
	printf("the last node : %s", (char*)last_node->content);

	free(node1);
	free(node2);
	free(node3);
}*/
