/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 08:54:22 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/19 09:07:41 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char temp;

	if (nb == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(nb * -1, fd);
	}
	else if (nb < 10)
	{
		temp = (char)(nb + '0');
		write(fd, &temp, 1);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		temp = (char)(nb % 10 + '0');
		write(fd, &temp, 1);
	}
}
