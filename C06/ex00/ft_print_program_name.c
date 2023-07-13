/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:37:22 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/13 11:59:29 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (av[0][i] != '\0' && ac > 0)
	{
		ft_putchar(av[0][i]);
			i++;
	}
	ft_putchar('\n');
	return (0);
}
