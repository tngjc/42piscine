/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:35:04 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/02 12:12:23 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int cols, int lines);

int	main(void)
{
	rush(5, 5);
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(0, 0);
	ft_putchar('\n');
	rush(0, 1);
	ft_putchar('\n');
	rush(2, 0);
	ft_putchar('\n');
	rush(-1, -37);
	ft_putchar('\n');
}
