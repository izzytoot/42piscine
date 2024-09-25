/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:43:19 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/25 14:43:25 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verif(char *str, int index, char c)
{
	int i;
	
	i = 0;
	while (i < index)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		while (argv[1][i])
		{
			if (verif(argv[1], i, argv[1][i]))
			{
				while (argv[2][j])
				{
					if (argv[2][j] == argv[1][i])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
