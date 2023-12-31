/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:37:22 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/15 17:06:51 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac < 0)
		return (0);
	while (av[0][i] != '\0')
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
