/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:01 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/12 12:06:05 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int order;
	int i;
	int j;

	j = 1;
	while (f(tab[0], tab[j]) == 0)
		j++;
	order = (f(tab[0], tab[j]) < 0 ? 1 : -1);
	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) * order > 0)
			return (0);
		i++;
	}
	return (1);
}
