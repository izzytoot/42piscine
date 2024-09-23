/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:21:21 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/22 17:21:22 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	s;
	int	*r;

	if (min >= max)
	{
		return (NULL);
	}
	s = max - min;
	r = (int *)malloc(sizeof(int) * s);
	if (! r)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	size;
	int	*result;

	min = 1;
	max = 10;
	i = 0;
	size = max - min;
	result = ft_range(min, max);
	while (i < size)
	{
		printf("%i ", result[i]);
		i++;
	}
	free (result);
	return (0);
}
*/
