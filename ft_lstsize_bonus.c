/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:04:43 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/13 01:07:57 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int main()
{
	struct s_list *node1 = ft_lstnew("Hello");
	struct s_list *node2 = ft_lstnew("Hi");
	struct s_list *node3 = ft_lstnew("Howdy");
	struct s_list *node4 = ft_lstnew("Cheers");

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	printf("the size is : %d", ft_lstsize(node1));

	free(node1);
	free(node2);
	free(node3);
	free(node4);
}*/
