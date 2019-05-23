/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:37:08 by lbritni           #+#    #+#             */
/*   Updated: 2019/05/20 15:37:13 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_sqrt(long l)
{
	unsigned int rslt;
	long div;

	rslt = (unsigned int)l;
	div = l;
	if (l <= 0)
		return 0;
	while (1)
	{
		div =  (l / div + div) / 2;
		if (rslt > div)
			rslt = (unsigned int)div;
		else
			return rslt;
	}
}
