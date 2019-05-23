/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 08:19:40 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/13 08:53:51 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *current;
	t_list *temp;
	t_list *prev;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	current = *begin_list;
	prev = NULL;
	while (current)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	*begin_list = prev;
}
