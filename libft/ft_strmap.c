/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 08:53:05 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 08:53:08 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char *res;
	char *cres;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(res = ft_strdup(s)))
		return (NULL);
	cres = res;
	while (*res)
	{
		*res = f(*res);
		res++;
	}
	return (cres);
}
