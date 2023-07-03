/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:26:09 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/02 12:26:16 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	write_line(int cols, char begin, char mid, char end)
{
	int	counter;

	counter = 0;
	while (counter < cols)
	{
		if (counter == 0)
		{
			ft_putchar(begin);
		}
		else if (counter == cols -1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		counter ++;
	}
	ft_putchar('\n');
}

void	rush(int cols, int lines)
{
	int	counter;

	if (cols <= 0 || lines <= 0)
	{
		return ;
	}
	counter = 0;
	write_line(cols, 'A', 'B', 'A');
	while (counter < lines - 2)
	{
		counter ++;
		write_line(cols, 'B', ' ', 'B');
	}
	if (lines != 1)
	{
		write_line(cols, 'C', 'B', 'C');
	}
}
