/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:04:34 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/12 15:02:26 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("hello"));
	t_list *node2 = ft_lstnew(ft_strdup("hello"));
	t_list *node3 = ft_lstnew(ft_strdup("hello"));

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	void ft_toupperx(void *content)
	{
		char *str = (char *)content;
		while(*str)
		{
			*str = (char)ft_toupper((unsigned char)*str);
			str++;
		}
	}

	ft_lstiter(node1, ft_toupperx);

	t_list *head = node1;
	while(node1)
	{
		printf("%s", (char *)node1->content);
		node1 = node1->next;
	}

	t_list *temp;
	while(node1)
	{
		temp = head->next;
		ft_lstdelone(head, free);
		head = temp;
	}

	return (0);
}*/
