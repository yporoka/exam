/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 12:19:08 by yporoka           #+#    #+#             */
/*   Updated: 2018/09/03 12:35:03 by yporoka          ###   ########.fr       */
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

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void	ft_fizzbuzz(int i)
{
	while (i <= 100)
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
	ft_fizzbuzz(1);
	return (0);
}
