/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 20:11:11 by yporoka           #+#    #+#             */
/*   Updated: 2018/08/17 20:21:38 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return (char *)s1;
		s1++;
	}
	return (NULL);
}
int		main(void)
{
	const char a[20] = "Hello, world";
	const char b[20] = "world";

	printf("Moya - %s\n", ft_strpbrk(a, b));
	printf("Orig - %s\n", strpbrk(a, b));
	return (0);
}
