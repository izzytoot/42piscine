/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:15:10 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/18 11:15:14 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		nb = nb * (ft_recursive_factorial(nb - 1));
		r = nb;
	}
	return (r);
}
/*
int	main(void)
{
	int	nb;
	
	nb = 0;
	while (nb >= 0 && nb <= 10)
	{
		printf("Factorial of %i is %i.\n", nb, ft_recursive_factorial(nb));
		nb++;
	}
	return (0);
}
*/
