/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:37:36 by yporoka           #+#    #+#             */
/*   Updated: 2018/06/25 12:45:00 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_first(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (len == i)
		return (1);
	return (0);
}

static int	is_instring(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void		ft_inter(char *str, char *str2)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_instring(str2, str[i]) && is_first(str, str[i], i))
			ft_putchar(str[i]);
		i++;
	}
}
