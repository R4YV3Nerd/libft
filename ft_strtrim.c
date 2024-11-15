/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:43:14 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/04 22:43:15 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setcheck(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	size_t		len;
	char		*trimmedstr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && setcheck(*s1, set) == 1)
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1) - 1;
	while (end > s1 && setcheck(*end, set) == 1)
		end--;
	len = end - s1 + 1;
	trimmedstr = (char *)malloc(len + 1);
	if (!trimmedstr)
		return (NULL);
	ft_strlcpy(trimmedstr, s1, len + 1);
	return (trimmedstr);
}
