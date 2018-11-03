/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 18:13:10 by yporoka           #+#    #+#             */
/*   Updated: 2018/10/01 18:13:15 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_atoi(char *str)
{
    int         ret;
    int         sign;
    int         i;

    ret = 0;
    i = 0;
    sign = 1;
    while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\v' || \
        str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (!(str[i] >= '0' && str[i] <= '9'))
        return (0);
    while (str[i] >= '0' && str[i] <= '9')
    {
        ret = ret * 10 + (str[i] - '0');
        i++;
    }
    return ((int)(ret * sign));
}

size_t    ft_strlen(const char *s)
{
    int         i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strcpy(char *dst, const char *src)
{
    int         i;

    i = 0;
    while ((dst[i] = src[i]) != '\0')
        i++;
    return (dst);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    int         i;
    int         j;
    char        *fresh;

    i = 0;
    j = 0;
    if (s1 == NULL)
        return ((char *)s2);
    else if (s2 == NULL)
        return ((char *)s1);
    if (!(fresh = (char *)malloc(sizeof(char) * \
                    (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);
    while (s1[i] != '\0')
    {
        fresh[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        fresh[i + j] = s2[j];
        j++;
    }
    fresh[i + j] = '\0';
    return (fresh);
}

char    *ft_itoa(int n)
{
    char        *str;

    if (!(str = (char *)malloc(sizeof(char) * 12)))
        return (NULL);
    if (n == -2147483648)
        return (ft_strcpy(str, "-2147483648"));
    if (n < 0)
    {
        str[0] = '-';
        str[1] = '\0';
        str = ft_strjoin(str, ft_itoa(-n));
    }
    else if (n >= 10)
        str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
    else if (n < 10 && n >= 0)
    {
        str[0] = n + '0';
        str[1] = '\0';
    }
    return (str);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = ft_atoi(argv[1]);

        printf("%s\n", ft_itoa(n));
    }
    else
        printf("Too much or low arguments\n");
  return 0;
}
