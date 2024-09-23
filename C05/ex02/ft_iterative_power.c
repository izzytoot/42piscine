/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:10:55 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/18 14:10:57 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	onb;

	r = 1;
	onb = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		while (power > 1)
		{
			nb = nb * onb;
			power--;
		}
		r = nb;
	}
	return (r);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	
	nb = 8;
	power = 0;
	while (power >= 0 && power <=10)
	{
		printf("%i powered to %i is %i.\n", 
			nb, power, ft_iterative_power(nb, power));
		power++;
	}
	return(0);
}
*/
