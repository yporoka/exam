/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:36:48 by yporoka           #+#    #+#             */
/*   Updated: 2018/08/17 13:44:11 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (str[i] >= 33 && str[i] <= 127)
		i--;
	i++;
	while (str[j + i] >= 33 && str[j + i] <= 127)
	{
		ft_putchar(str[j + i]);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
