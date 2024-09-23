/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:04:59 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/05 18:05:25 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	inicio;

	inicio = '0';
	while (inicio <= '9')
	{
		write(1, &inicio, 1);
		inicio++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
