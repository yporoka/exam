/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:02:43 by yporoka           #+#    #+#             */
/*   Updated: 2018/09/09 13:02:47 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void  ft_print_map(int **map, int size)
{
  int x;
  int y;
  
  y = 0;
  while (y != size)
  {
    x = 0;
    while (x != size)
    {
      printf("%d ", map[y][x]);
      x++;
    }
    printf("\n");
    y++;
  }
}

int  **ft_fill_map(int **map, int size, int n)
{
  int x;
  int y;
  int i;
  
  y = 0;
  i = 0;
  while (y != size)
  {
    x = 0;
      while (x != size)
      {
        if (x == 0 || y == 0 || x == size - 1 || y == size - 1)
          map[y][x] = n - i;
        else
          map[y][x] = 1;
        x++;
      }
    y++;
  }
  return (map);
}
      


int    **ft_create_map(int n)
{
  int **arr;
  int i;
  
  arr = (int**) calloc(n, sizeof(int*));
  for ( i = 0; i < n; i++ )
  {
     arr[i] = (int*) calloc(n, sizeof(int));
  }
    return (arr);  
}

int     main() 
{
    int n = 3;
    int i = 0;
    int    **map;
    int     map_size;
    map_size = n * 2 - 1;
    map = ft_create_map(map_size);
	map = ft_fill_map(map, map_size, n);
    ft_print_map(map, map_size);
    return 0;
}