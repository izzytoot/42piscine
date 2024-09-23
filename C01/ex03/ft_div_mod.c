/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:52:47 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/10 18:52:56 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 5;
	y = 2;
	ft_div_mod(x, y, &div, &mod);
	printf ("%i / %i = %i \n", x, y, div);
	printf ("%i rest %i = %i \n", x, y, mod);
	return (0);
}
*/
