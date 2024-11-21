/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 00:29:00 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/21 00:29:02 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str)
		{
			count++;
			while (*str != c && *str)
				str++;
		}
	}
	return (count);
}

static char	**freeing(char **m, int i)
{
	while (i-- > 0)
		free(m[i]);
	free(m);
	return (NULL);
}

static char const	*skip(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**m;

	i = 0;
	if (!s)
		return (NULL);
	m = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!m)
		return (NULL);
	while (*s)
	{
		len = 0;
		s = skip(s, c);
		if (*s == '\0')
			break ;
		while (s[len] != c && s[len])
			len++;
		m[i] = ft_substr(s, 0, len);
		if (m[i++] == NULL)
			return (freeing (m, i));
		s += len;
	}
	m[i] = NULL;
	return (m);
}
