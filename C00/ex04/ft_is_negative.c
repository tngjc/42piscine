/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:53:25 by jtaing            #+#    #+#             */
/*   Updated: 2023/06/29 09:52:33 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}	
	else
	{
		write(1, "N", 1);
	}
}
/*int main (void)
{
        int a = 1;
        int b = -8;
        int c = 0;

       ft_is_negative(a);
       ft_is_negative(b);
       ft_is_negative(c);
        return 0 ;
}*/
