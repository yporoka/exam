/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 19:57:51 by yporoka           #+#    #+#             */
/*   Updated: 2018/09/29 19:57:53 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FT_LIST_H__
# define __FT_LIST_H__

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data, int n);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif