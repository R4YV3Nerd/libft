/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:04:44 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/16 10:43:36 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static void	*ft_free(int i, char **array)
{
	while (i >= 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
	return (NULL);
}

static char	**ft_split_handler(char const *s, char c, int i, int j)
{
	char	**array;
	char	*tmp;
	int		words;

	words = ft_count_word(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array[words] = 0;
	while (++i < words)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j] != '\0')
			j++;
		tmp = ft_substr(s, 0, j);
		if (!tmp)
			return (ft_free(i - 1, array));
		array[i] = tmp;
		s = ft_strchr(s, c);
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_split_handler(s, c, -1, 0));
}
