/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:18:58 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/01 13:12:02 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long int	a;

	a = nb;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar('0' + (a % 10));
}

/*int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr(42);
	write(1, "\n", 1);
	write(1, "10:", 3);
	ft_putnbr(10);
	write(1, "\n", 1);
	write(1, "0:", 2);
	ft_putnbr(0);
	write(1, "\n", 1);

	write(1, "-42:", 4);
	ft_putnbr(-42);
	write(1, "\n", 1);
	write(1, "-1:", 3);
	ft_putnbr(-1);
	write(1, "\n", 1);
	write(1, "max:", 4);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	write(1, "min:", 4);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}*/
