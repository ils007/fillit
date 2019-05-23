/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:14:53 by lbritni           #+#    #+#             */
/*   Updated: 2019/04/08 11:14:57 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	if (power >= 1)
	{
		result = nb * ft_power(nb, power - 1);
	}
	return (result);
}

static int	is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*res;
	char	*cres;

	i = 9;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (i > 0 && n / ft_power(10, i) == 0)
		i--;
	if (!(res = (char *)(malloc((i + 2 + is_negative(n)) * sizeof(char)))))
		return (NULL);
	cres = res;
	if (n < 0)
	{
		*res++ = '-';
		n = -n;
	}
	while (i >= 0)
	{
		*res++ = (char)(n / ft_power(10, i) + '0');
		n = n % ft_power(10, i--);
	}
	*res = '\0';
	return (cres);
}
