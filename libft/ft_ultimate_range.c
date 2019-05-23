/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:40:19 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/07 10:04:05 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ultimate_range(int **range, int min, int max)
{
	int *res;
	int i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int*)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (0);
	res = *range;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (i);
}
