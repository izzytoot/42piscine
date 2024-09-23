/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:50:37 by jteixeir          #+#    #+#             */
/*   Updated: 2024/09/07 14:50:46 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Rush00
#define FIRST_LINE_FIRST_CHAR	'o'	// nlini == nl && ncini == nc
#define FIRST_LINE_LAST_CHAR	'o'	// nlini == nl && nc ==  1
#define LAST_LINE_FIRST_CHAR	'o'	// nl ==  1 && ncini == nc
#define LAST_LINE_LAST_CHAR	'o'	// nl ==  1 && nc ==  1

#define FIRST_LINE_INNER_CHAR	'-' // nlini == nl && ncini > nc && 1 < nc 
#define LAST_LINE_INNER_CHAR	'-' //  1 == nl && ncini > nc && 1 < nc

#define LINE_FIRST_CHAR	'|' // nlini > nl  && 1 < nl && ncini == nc
#define LINE_LAST_CHAR	'|' // nlini > nl  && 1 < nl && 1 == nc

#define LINE_INNER_CHAR	' ' // by default

void	ft_putchar(char c);

char	logic(int nc, int nl, int ncini, int nlini);

void	rush(int nc, int nl)
{
	int	nlini;
	int	ncini;

	if (nc < 1 || nl < 1)
	{
		write(1, "\n The columns and rows most be greater than 0.\n", 47);
		write(1, "\033[1;32m\n\n\tPlease, try again 😀️.\n\n\n", 40);
		write(1, "\e[m", 3);
		return ;
	}
	nlini = nl;
	ncini = nc;
	while (nl)
	{
		while (nc)
		{
			ft_putchar(logic(nc, nl, ncini, nlini));
			nc--;
		}
		write(1, "\n", 1);
		nc = ncini;
		nl--;
	}
}

char	logic(int nc, int nl, int ncini, int nlini)
{
	char	c;

	c = LINE_INNER_CHAR;
	if (nlini == nl && ncini == nc)
		c = FIRST_LINE_FIRST_CHAR;
	else if (nlini == nl && nc == 1)
		c = FIRST_LINE_LAST_CHAR;
	else if (nl == 1 && ncini == nc)
		c = LAST_LINE_FIRST_CHAR;
	else if (nl == 1 && nc == 1)
		c = LAST_LINE_LAST_CHAR;
	else if (nlini == nl && ncini > nc && 1 < nc)
		c = FIRST_LINE_INNER_CHAR;
	else if (1 == nl && ncini > nc && 1 < nc)
		c = LAST_LINE_INNER_CHAR;
	else if (nlini > nl && 1 < nl && ncini == nc)
		c = LINE_FIRST_CHAR;
	else if (nlini > nl && 1 < nl && 1 == nc)
		c = LINE_LAST_CHAR;
	return (c);
}
