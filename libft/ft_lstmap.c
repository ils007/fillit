/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:24:02 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 17:24:08 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(res = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	res = f(lst);
	res->next = ft_lstmap(lst->next, f);
	return (res);
}
