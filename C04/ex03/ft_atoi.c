/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:48:40 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/17 09:48:42 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_atoi(char *str)
{
	int	i;
	int	sym;
	int	r;

	i = 0;
	sym = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] > '\b' && str[i] < '\r'))
	{
		i++;
	}
	while (str[i] == '+' || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sym = sym * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * sym);
}
/*
int	main(void)
{
	char	str[] = " ---+--+1234ab567";
	printf ("%d\n", ft_atoi(str));
	return (0);
}
*/
