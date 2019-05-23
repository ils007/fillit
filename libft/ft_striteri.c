/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 08:40:21 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 08:40:24 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (*s)
	{
		f(index, s);
		s++;
		index++;
	}
}
