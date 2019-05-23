/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:34:09 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/03 12:34:14 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	flag;
	unsigned char	*csrc;
	unsigned char	*cdest;

	flag = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	if (csrc == cdest)
		return (dest);
	else if (csrc < cdest && cdest < csrc + n)
	{
		csrc += n;
		cdest += n;
		flag = 1;
	}
	if (flag)
		while (n--)
			*--cdest = *--csrc;
	else
		while (n--)
			*cdest++ = *csrc++;
	return (dest);
}
