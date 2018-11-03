/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:23:21 by yporoka           #+#    #+#             */
/*   Updated: 2018/08/24 13:30:47 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (NULL);
}

char	*ft_strpbrk(char *s1, char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Моя - %s\n", ft_strpbrk(argv[1], argv[2]));
		printf("Ориг- %s\n", strpbrk(argv[1], argv[2]));
		
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
