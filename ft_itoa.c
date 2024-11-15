/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maitoumg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:48:21 by maitoumg          #+#    #+#             */
/*   Updated: 2024/11/12 21:39:10 by maitoumg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_convert(char *str, long n, int length)
{
	while (n > 0)
	{
		str[--length] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		length;
	char	*str;
	int		is_negative;

	num = (long)n;
	length = ft_count(num);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	else
		ft_convert(str, num, length);
	if (is_negative)
		str[0] = '-';
	return (str);
}
