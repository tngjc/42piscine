/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 07:59:25 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/12 09:52:52 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb <= 1 || nb % 2 == 0)
		return (0);
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

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(9));
}
