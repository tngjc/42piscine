/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 07:59:25 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/13 10:09:56 by jtaing           ###   ########.fr       */
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

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(2102000009));
}
