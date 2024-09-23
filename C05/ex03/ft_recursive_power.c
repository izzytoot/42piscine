/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:34:09 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/18 15:34:12 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		r = nb * (ft_recursive_power(nb, power - 1));
	}
	return (r);
}
/*
int	main(void)
{
	int	power;
	int	nb;
	
	power = 0;
	nb = 8;
	while (power >= 0 && power <=10)
	{
		printf("%i powered to %i is %i.\n", nb, power, 
			ft_recursive_power(nb, power));
		power++;
	}
	return (0);
}
*/
