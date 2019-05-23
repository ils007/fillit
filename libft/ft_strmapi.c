/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 08:53:05 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 08:53:08 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	char	*cres;
	int		index;

	index = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(res = ft_strdup(s)))
		return (NULL);
	cres = res;
	while (*res)
	{
		*res = f(index, *res);
		res++;
		index++;
	}
	return (cres);
}
