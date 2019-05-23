/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:03:40 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/12 14:35:24 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_list_size(t_list *begin_list)
{
	unsigned int count;

	count = 1;
	if (begin_list == NULL)
		return (0);
	else
	{
		while (begin_list->next != NULL)
		{
			begin_list = begin_list->next;
			count++;
		}
	}
	return (count);
}
