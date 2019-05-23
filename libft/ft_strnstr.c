/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 07:50:29 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/04 07:50:32 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*begin;
	const char	*to_find_cp;
	size_t		clen;

	if (*to_find == '\0')
		return ((char *)str);
	while (*str != '\0' && len)
	{
		clen = len;
		begin = str;
		to_find_cp = to_find;
		while (*to_find_cp == *str && clen)
		{
			if (*to_find_cp == '\0')
				return ((char *)begin);
			str++;
			to_find_cp++;
			clen--;
		}
		if (*to_find_cp == '\0')
			return ((char *)begin);
		str = begin + 1;
		len--;
	}
	return (NULL);
}
