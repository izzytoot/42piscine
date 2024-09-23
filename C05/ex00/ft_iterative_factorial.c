/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:01:32 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/17 18:01:33 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	r;
	int	n;

	r = 1;
	n = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		while (n > 1)
		{
			nb = nb * (n - 1);
			n--;
		}
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
		printf("Factorial of %i is %i.\n", nb, ft_iterative_factorial(nb));
		nb++;
	}
	return (0);
}
*/
