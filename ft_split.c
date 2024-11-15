/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:04:44 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/15 14:49:00 by m3d417           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(const char *s, char c)
{
    int count;
    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return count;
}

static char *ft_allocate(const char *s, char c)
{
    int len;
    char *str;
    len = 0;
    while (s[len] && s[len] != c)
        len++;
    str = malloc(len + 1);
    if (!str)
        return NULL;
    for (int i = 0; i < len; i++)
        str[i] = s[i];
    str[len] = '\0';
    return str;
}

char **ft_split(const char *s, char c)
{
    char **arr;
    int words;9
    int i;
    if (!s)
        return NULL;
    words = ft_count(s, c);
    arr = malloc((words + 1) * sizeof(char *));
    if (!arr)
        return NULL;
    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            arr[i] = ft_allocate(s, c);
            if (!arr[i])
                return NULL;
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    arr[i] = NULL;
    return arr;
}

