/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:23:31 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/12 16:36:46 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int count;

	count = 1;
	if (begin_list == NULL)
		return (NULL);
	else
	{
		while (nbr != count)
		{
			if (begin_list->next == NULL)
				return (NULL);
			begin_list = begin_list->next;
			count++;
		}
	}
	return (begin_list);
}
