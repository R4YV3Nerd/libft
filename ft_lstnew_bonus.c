/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:52:58 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/13 02:12:52 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;*/
// this function creates our nodes
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main()
{
	struct s_list *node1 = ft_lstnew("Hello");
	struct s_list *node2 = ft_lstnew("Word");
	struct s_list *node3 = ft_lstnew("42");

	node1->next = node2;
	node2->next = node3;
	//node3->next = NULL;

	struct s_list *current = node1;
	while (current)
		{
			printf("%s\n", (char *)current->content);
			current = current->next;
		}
	printf("the address is : %p", &next);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
