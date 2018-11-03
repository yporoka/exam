/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yporoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:59:07 by yporoka           #+#    #+#             */
/*   Updated: 2018/09/23 16:59:10 by yporoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;


float   ft_heron(triangle tr)
{
  float p;
  float s;

  if (tr.a < 0 || tr.b < 0 || tr.c <0 || (tr.a + tr.b <= tr.c) || 
        tr.a + tr.c <= tr.b || tr.b + tr.c <= tr.a) 
  { 
        printf("Not a valid trianglen"); 
        exit(0); 
  } 
  
  p = (tr.a + tr.b + tr.c) / 2.;
  s = sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
  return (s);
}

void sort_by_area(triangle* tr, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int k = i;
        while (k > 0 && ft_heron(tr[k - 1]) > ft_heron(tr[k]))
        {
            triangle tmp = tr[k - 1];
            tr[k - 1] = tr[k];
            tr[k] = tmp;
            k -=1;
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	printf("After sort\n");
	for (int i = 0; i < n; i++) 
	{
		printf("%d %d %d	", tr[i].a, tr[i].b, tr[i].c);
		printf("%f\n", ft_heron(tr[i]));
	}
	return 0;
}