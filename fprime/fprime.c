/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:35:05 by yporoka           #+#    #+#             */
/*   Updated: 2018/10/29 19:40:32 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(char *str)
{
	unsigned int div;
	unsigned int nb;

	nb = atoi(str);
	div = 2;
	if (nb == 1)
		printf("1");
	if (nb < 1)
		return ;
	while (div <= nb)
	{
		if (nb % div == 0)
		{
			printf("%d", div);
			if (nb == div)
				return ;
			nb /= div;
			div = 1;
			printf("*");
		}
		div++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(argv[1]);
		printf("\n");
	}
	else
		printf("\n");
	return (0);
}
