/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:25:23 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/05 15:25:31 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	inicio;

	inicio = 'a';
	while (inicio <= 'z')
	{
		write(1, &inicio, 1);
		inicio++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
