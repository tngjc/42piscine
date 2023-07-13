/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:30:21 by jtaing            #+#    #+#             */
/*   Updated: 2023/07/13 07:18:14 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	len(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * len(src) + 1)))
		return (NULL);
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

int	main(int ac,char *av[])
{
	char *test;
	char *test2;

	if (ac == 2)
	{
		test = ft_strdup(av[1]);
		test2 = strdup(av[1]);
		printf("%s : %s", test, test2);
	}
	return (0);
}
