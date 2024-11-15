/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:04:44 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/15 13:36:50 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(const char *s, char c)
{
        int count;

        count = 0;
        while(*s)
        {
		while(*s == c)
			s++;
		while(s && *s != c)
			s++;
        	if(*s == c)
                        count++;
                s++;
	}
	return count;
}

static char *ft_allocate(const char *s, char c, int n)
{
	char *ptr;

	ptr = malloc(n + 1);
	if(!ptr)
		return NULL;
	while(*ptr && *s != c)
	{
		while(*ptr == c)
			ptr++;
		while(*ptr && *s && *s != c)
		{
			*ptr = *s;
			ptr++;
			s++;
		}
	}
}


char	**ft_split(const char *s, char c)
{
	
}
