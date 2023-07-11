/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:39:34 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/11 10:02:37 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


int	ft_iterative_power(int nb, int power)
{
	int	result;
	
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	if (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
int	main(void)
{
	printf("%d", ft_iterative_power(3, 1));
}
