/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:21:36 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/05 13:49:37 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hexa[16] ="abcdef0123456789" ;
	
	while (*str)
	{
		if (*str >= 0 && (*str < 32 || *str == 127))
		{
			ft_putchar('\\');
				
			int	a = (*str / 16);
			int	b = (*str % 16);
			
			ft_putchar(hexa[a]);
			ft_putchar(hexa[b]);
		}
		else
	 	{
			ft_putchar(*str);
		}
		str++;
	}
}

#include <unistd.h>


void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr("\n\\81\\be:");
	ft_putstr_non_printable(d);
}
