/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbritni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 17:20:28 by lbritni           #+#    #+#             */
/*   Updated: 2019/02/07 10:37:44 by lbritni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		argvlen(int argc, char **argv)
{
	int count;
	int i;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count += ft_strlen(argv[i]);
		i++;
	}
	return (count);
}

char			*ft_concat_params(int argc, char **argv)
{
	char	*result;
	char	*res;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (!(result = (char*)malloc((argvlen(argc, argv) + argc - 1) *
	sizeof(char))))
		return (NULL);
	res = result;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			*result++ = argv[i][j++];
		if (i != argc - 1)
		{
			*result = '\n';
			result++;
		}
		i++;
		j = 0;
	}
	*result = '\0';
	return (res);
}
