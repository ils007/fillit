/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 08:54:22 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/19 09:07:41 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	char temp;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		temp = (char)(nb + '0');
		write(1, &temp, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		temp = (char)(nb % 10 + '0');
		write(1, &temp, 1);
	}
}
