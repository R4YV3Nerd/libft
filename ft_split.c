/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:00:03 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/16 14:03:49 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    count_words(const char *str, char c)
{
    int    count;
    
    count = 0;
    while (*str)
    {
        while(*str == c)
          str++;
        if(*str)
        {
          count++;
          while(*str != c && *str)
              str++;
        }
    }
    return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		progress;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return NULL;
	i = 0;
	j = 0;
	progress = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && progress < 0)
			progress = i;
		else if ((s[i] == c || i == ft_strlen(s)) && progress >= 0)
		{
			split[j++] = word_dup(s, progress, i);
			progress = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
