/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:16:31 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/18 12:47:11 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"

void rush02(int ln, int cl)
{
	char c;
	char l;
	
	l = 0;
	
	while (l < ln)
	{
		c = 0;
		while (c < cl)
			{
				if ((l == 0 && c == 0) || (c == cl-1 && l == 0))
					{
						ft_putchar('A');
					}
				else if ((c == 0 && l == ln - 1) || (c == cl - 1 && l == ln - 1))
					{
						ft_putchar('C');	
					}
				else if(l == 0 || l == ln - 1 || c == 0 || c == cl - 1)	
					{
						ft_putchar('B');
					}
				else
					{
						ft_putchar(' ');
					}
				c++;
				
			}
		l++;
		ft_putchar('\n');
	}
}

int main(void){
	rush02(5,5);
	return (0);
}