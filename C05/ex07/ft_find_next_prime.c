/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:18:24 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/13 10:22:05 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	int	i;
	
	i = 2;
	while (i <= nb / i)
	{		
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	while (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(i) != 1)
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(01));

}
