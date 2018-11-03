/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 20:00:33 by yporoka           #+#    #+#             */
/*   Updated: 2018/09/29 20:00:35 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data, int n)
{
	t_list	*tmp;
	t_list	*first;
	int		i;

	first = (t_list *)malloc(sizeof(t_list));
	tmp = first;
	i = 0;

	while (i < n)
	{
		
	}

	return (first);
}