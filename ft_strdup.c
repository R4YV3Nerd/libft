/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:42:39 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/04 22:42:40 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*dup;

	length = ft_strlen(s);
	dup = (char *)malloc(length + 1);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, length + 1);
	return (dup);
}
