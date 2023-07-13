/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 07:49:45 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/13 09:11:31 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	if (min >= max)
		return (0);
	
	int 	i;
	int	j;
	int	*k;
	
	i = 0;
	j = max - min;
	if (!(k = (int*)malloc(sizeof(int) * j)))
		return (0);
	while (i < j)
	{
		k[i] = min + i;
		i++;
	}
	return (k);
}

#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int *range;

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	
	range = ft_range(3, 3);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
	
	free(range);
}
