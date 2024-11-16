/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:42:49 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/16 11:00:52 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;
	size_t	k;
	size_t	i;

	ld = 0;
	while (dst[ld] != '\0')
		ld++;
	ls = 0;
	while (src[ls] != '\0')
		ls++;
	if (dstsize <= ld)
		return (dstsize + ls);
	k = ld;
	i = 0;
	while (src[i] != '\0' && k < dstsize - 1)
	{
		dst[k] = src[i];
		k++;
		i++;
	}
	dst[k] = '\0';
	return (ld + ls);
}
