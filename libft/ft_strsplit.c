/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:09:12 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 10:09:13 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordlen(char const *str, char c)
{
	int			len;
	char const	*cstr;

	cstr = str;
	len = 0;
	while ((*cstr != c) && *cstr != '\0')
	{
		len++;
		cstr++;
	}
	return (len);
}

static int		ft_fulfill(char **res, const char *str, char c)
{
	int		i;
	char	*word;
	char	*begin;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		if (!(word = (char*)malloc((wordlen(str, c) + 1) * sizeof(char))))
			return (-1);
		begin = word;
		while ((*str != c) && *str != 0)
			*word++ = *str++;
		*word = '\0';
		(res[i++]) = begin;
	}
	(res[i]) = NULL;
	return (1);
}

static void		ft_freememory(char **res)
{
	int i;

	i = 0;
	while ((res[i]) != NULL)
	{
		free((res[i]));
		i++;
	}
	free(res);
}

static int		count(char const *str, char c)
{
	int			i;
	int			flag;
	char const	*cstr;

	cstr = str;
	i = 0;
	flag = 1;
	while (*cstr)
	{
		if ((*cstr != c) && flag)
		{
			i++;
			flag = 0;
		}
		if (*cstr == c)
			flag = 1;
		cstr++;
	}
	return (i);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**res;

	if (str == NULL ||
	!(res = (char**)malloc((count(str, c) + 1) * sizeof(char*))))
		return (NULL);
	if (ft_fulfill(res, str, c) == -1)
	{
		ft_freememory(res);
		return (NULL);
	}
	return (res);
}
