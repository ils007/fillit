/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 07:50:29 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/04 07:50:32 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*begin;
	const char	*to_find_cp;

	if (*to_find == '\0')
		return ((char *)str);
	while (*str != '\0')
	{
		begin = str;
		to_find_cp = to_find;
		while (*to_find_cp == *str)
		{
			if (*to_find_cp == '\0')
				return ((char *)begin);
			str++;
			to_find_cp++;
		}
		if (*to_find_cp == '\0')
			return ((char *)begin);
		str = begin + 1;
	}
	return (NULL);
}
