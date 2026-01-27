/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:36:17 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/19 11:43:10 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void	rush (char l, char c)
{
	int	col;
	int	line;

	line = 0;

	while (line < l)
	{
		col = 0;
		while (col < c)
		{
			if (line == 0 && col == 0)
			ft_putchar('A');
			else if (line == 0 && col == c - 1)
			ft_putchar('C');
			else if(col == 0 && line == l - 1)
			ft_putchar('C');
			else if (col == c - 1 && line == l - 1)
			ft_putchar('A');
			else if (line == 0 || line == l - 1 || col == 0 || col == c - 1) 
			ft_putchar('B');
			else 
			ft_putchar(' ');
			col ++;
		}
	line++;
	ft_putchar('\n');
	}
}

int main(void)
{
	rush(5,5);
	return (0);
}
