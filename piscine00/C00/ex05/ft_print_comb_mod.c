/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_mod.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:33:34 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/21 16:32:47 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;
	int i;

	i = 0;
	
	while (i <= 789)
	{
		c = i/100;
		d = (i/10)%10;
		u = i%10;
		if (c < d && d < u)
		printf("%d""%d""%d, ",c,d,u);
		i++;

	}
			
}	


int main(void)
{
	ft_print_comb();
	return (0);
}
