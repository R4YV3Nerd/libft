/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:42:15 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/05 01:19:09 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (ptr1 < ptr2)
	{
		i = 0;
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			ptr1[n] = ptr2[n];
	}
	return (dest);
}
