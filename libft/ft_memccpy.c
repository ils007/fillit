/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:34:09 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/03 12:34:14 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *csrc;
	unsigned char *cdest;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	while (n)
	{
		n--;
		*cdest = *csrc;
		if (*csrc == (unsigned char)c)
			return (++cdest);
		cdest++;
		csrc++;
	}
	return (NULL);
}
