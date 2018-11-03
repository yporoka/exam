/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:03:50 by yporoka           #+#    #+#             */
/*   Updated: 2018/10/05 16:09:21 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return ((char *)s1);
	else if (*s2 == '\0')
		return ((char *)s1);
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (i + j < len && s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char a[20] = "Hello, amogo";
	char b[20] = "amogo";

	printf("%s\n", ft_strnstr(a, b, 10));
	printf("%s\n", strnstr(a, b, 10));
	return(0);
}
