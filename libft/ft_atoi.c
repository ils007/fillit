/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 08:23:43 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/16 10:09:39 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(const char s)
{
	if (s == ' ' || s == '\n' || s == '\t' || s == '\v' ||
		s == '\r' || s == '\f')
		return (1);
	else
		return (0);
}

static int	ft_is_overflow(long long n, int a, int b)
{
	long long c;

	c = n * a + b;
	if (n == 0 || (c - b) / n == a)
		return (0);
	else
		return (1);
}

int			ft_atoi(const char *s)
{
	long long	n;
	long long	sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*s) == 1)
		s++;
	if (((*s == '-' || *s == '+') && (*(s + 1) < '0' || *(s + 1) > '9')))
		return (0);
	if ((*s == '-' || *s == '+') && *(s + 1) >= '0' && *(s + 1) <= '9')
		if (*s++ == '-')
			sign = (-1);
	while (*s >= '0' && *s <= '9')
	{
		if (ft_is_overflow(n, 10, *s - 48) && sign == -1)
			return (0);
		if (ft_is_overflow(n, 10, *s - 48))
			return (-1);
		n *= 10;
		n += *s - 48;
		s++;
	}
	return (int)(n * sign);
}
