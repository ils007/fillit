/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:10:09 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/07 09:57:35 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	dest[ft_strlen(src)] = '\0';
	return (dest);
}
