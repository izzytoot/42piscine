/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:16:08 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/22 18:16:09 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	s;
	int	i;
	int	*r;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	s = max - min;
	r = (int *)malloc(sizeof(int) * (s));
	if (! r)
	{
		*range = NULL;
		return (-1);
	}
	*range = r;
	i = 0;
	while (max > min)
	{
		r[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	size;
	int	*range;

	min = 1;
	max = 10;
	i = 0;
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%i ", range[i]);
		i++;
	}
	free (range);
	return (0);
}
*/
