/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:18:24 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/12 09:51:05 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb == 2)
		return (1);
	int	i;
	
	i = 3;
	while (nb % i != 0)
		i += 2;
	if (nb == i)
		return (1);
	return (0);
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
	printf("%d", ft_find_next_prime(2100000000));

}
