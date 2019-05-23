/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 09:50:43 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 09:50:46 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*res;
	char const	*begin;
	int			len;
	int			start;

	if (s == NULL)
		return (NULL);
	begin = s;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return (ft_strdup(""));
	start = s - begin;
	begin = s;
	while (*s)
		s++;
	while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\0')
		s--;
	len = s - begin + 1;
	res = ft_strsub(begin, 0, len);
	return (res);
}
