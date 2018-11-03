/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 12:51:18 by yporoka           #+#    #+#             */
/*   Updated: 2018/08/24 13:18:40 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result;

	result = octet;
	printf("%o\n", result);
	while (octet)
	{
		result <<= 1;
		result |= (octet & 1);
		octet >>= 1;
	}
	result <<=1;
	return (result);
}

int main(void)
{
	printf("%o\n", reverse_bits(100));
	return (0);
}
