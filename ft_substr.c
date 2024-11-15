/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:43:17 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/04 22:43:18 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	substringlen;
	char	*substr;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len < (slen - start))
		substringlen = len;
	else
		substringlen = slen - start;
	substr = (char *)malloc(substringlen + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, substringlen + 1);
	return (substr);
}
