/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:19:41 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/01 11:18:10 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_bis(char c)
{
	write(1, &c, 1);
}

void	number(int n)
{
	ft_putchar_bis('0' + n / 10);
	ft_putchar_bis('0' + n % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			number(a);
			write(1, " ", 1);
			number(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
