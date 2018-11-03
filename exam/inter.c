/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:04:33 by yporoka           #+#    #+#             */
/*   Updated: 2018/08/17 14:04:36 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_first(char *str, char c, int len)
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

int		is_instring(char *str, char c)
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

void	ft_inter(char *str, char *str1)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_instring(str1, str[i]) && is_first(str, str[i], i))
			ft_putchar(str[i]);
		i++;
	}
}
