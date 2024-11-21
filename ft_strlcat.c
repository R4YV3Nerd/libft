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
	size_t	buffer;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	ld = 0;
	while (dst[ld] != '\0')
		ld++;
	ls = 0;
	while (src[ls] != '\0')
		ls++;
	if (dstsize <= ld)
		return (dstsize + ls);
	buffer = ld;
	i = 0;
	while (src[i] != '\0' && buffer < dstsize - 1)
	{
		dst[buffer] = src[i];
		buffer++;
		i++;
	}
	dst[buffer] = '\0';
	return (ld + ls);
}
