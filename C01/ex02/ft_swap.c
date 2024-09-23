/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:25:06 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/10 17:25:08 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("before ft_swap: %i, %i\n", x, y);
	ft_swap(&x, &y);
	printf("after ft_swap: %i, %i\n", x, y);
	return (0);
}
*/
