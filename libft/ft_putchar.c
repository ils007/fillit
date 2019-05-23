/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 09:07:50 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/04 17:11:16 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	char output[2];

	if (c >= 0)
	{
		output[0] = c;
		write(1, output, 1);
	}
	else if (c < 0)
	{
		output[0] = (char)(0xC3);
		output[1] = (char)(0x80 | (c & 0x3F));
		write(1, output, 2);
	}
}
