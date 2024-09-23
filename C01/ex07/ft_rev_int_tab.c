/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:53:53 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/12 10:53:54 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int j;

	i = 0;
	j = size -1;
	while(i < j)
	{
		temp = tab [i];
		tab [i] = tab[j];
		tab[j]=temp;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = sizeof tab / sizeof[0];
	prinf("Before ft_rev_int_tab: %d\n", tab);
	ft_rev_int_tab(tab, size);
	prinf("After ft_rev_int_tab: %d\n", tab);
	return(0);
}
