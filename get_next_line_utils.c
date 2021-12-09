/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:18:31 by aymoulou          #+#    #+#             */
/*   Updated: 2021/12/06 20:47:10 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	if (str)
	{
		i = 0;
		while (str[i])
			i++;
		return (i);
	}
	return (-1);
}

char	*ft_strdup(char *s)
{
	int		len;
	int		i;
	char	*tmp;
	char	*r;

	if (s)
	{
		i = -1;
		len = ft_strlen(s);
		tmp = malloc(len + 1);
		if (!tmp)
			return (0x0);
		r = tmp;
		while (s[++i])
		{
			*(tmp++) = s[i];
		}
		*tmp = 0;
		return (r);
	}
	return (0x0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*str;
	char	*r;

	str = 0x0;
	r = 0x0;
	if (!s1 || !s2)
		return (0x0);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str)
	{
		r = str;
		i = -1;
		while (s1[++i])
			*(str++) = s1[i];
		i = -1;
		while (s2[++i])
			*(str++) = s2[i];
		*str = 0;
		return (r);
	}
	return (0x0);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0x0);
}

char	*ft_substr(char *s, unsigned int start, unsigned int end)
{
	char	*str;
	char	*r;

	r = 0x0;
	if (!s || start >= ft_strlen(s))
		return (0x0);
	str = malloc(end - start + 1);
	r = str;
	if (!str)
		return (0x0);
	while (start < end)
	{
		*str = s[start];
		start++;
		str++;
	}
	*str = 0;
	return (r);
}
