/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:40:44 by yporoka           #+#    #+#             */
/*   Updated: 2018/08/03 12:48:34 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int i)
{
	if (i == -2147483648)
		ft_putstr("-2147483648");
	else if (i < 0)
	{
		ft_putchar('-');
		ft_putnbr(-i);
	}
	else if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
	else
		ft_putchar(i + '0');
}

void	ft_fizzbuzz(void)
{
	int i;

	i = 1;
	while (i != 101)
	{
		if ((i % 15) == 0)
			ft_putstr("fizzbuzz\n");
		else if ((i % 3) == 0)
			ft_putstr("fizz\n");
		else if ((i % 5) == 0)
			ft_putstr("buzz\n");
		else
		{
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
	}
}

int		main(void)
{
	ft_fizzbuzz();
	return (0);
}
