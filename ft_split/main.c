/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:07:32 by yporoka           #+#    #+#             */
/*   Updated: 2018/07/01 16:21:01 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "split.h"

int		main(int argc, char **argv)
{
	char	**arr;
	int		i;

	i = 0;
	if (argc == 2)
	{
		arr = ft_split(argv[1]);
		while (arr[i] != NULL)
			printf("%s\n", arr[i++]);
	}
	else
		printf("Too few or lot arguments\n");
	return (0);
}
