/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 09:15:07 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 09:15:10 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		index;

	if (s == NULL)
		return (NULL);
	index = 0;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (len)
	{
		res[index] = s[start];
		index++;
		start++;
		len--;
	}
	res[index] = '\0';
	return (res);
}
