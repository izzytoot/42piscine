/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:36:40 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/24 16:36:41 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	l;
	int	w;
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i])
	{
		i++;
	}
	l = i - 1;
	while (l >= 0 && (argv[1][l] == ' ' || (argv[1][l] >= 9 && argv[1][l] <= 13)))
	{
		l--;
	}
	while (l >= 0 && !(argv[1][l] == ' ' || (argv[1][l] >= 9 && argv[1][l] <= 13)))
	{
		l--;
	}
	w = l + 1;
	while (argv[1][w] && !(argv[1][w] == ' ' || (argv[1][w] >= 9 && argv[1][w] <= 13)))
	{
		write(1, &argv[1][w], 1);
		w++;
	}
	write(1, "\n", 1);
	return (0);
}
