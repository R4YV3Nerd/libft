/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:42:49 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/04 22:42:50 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	ls;
	size_t	ld;

	k = 0;
	while (dst[k] != '\0')
		k++;
	ld = k;
	i = 0;
	while (src[i] != '\0')
		i++;
	ls = i;
	if (dstsize <= ld)
		return (dstsize + ls);
	i = 0;
	while (src[i] != '\0' && i < dstsize - ld - 1)
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (ld + ls);
}
