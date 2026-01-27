/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:04:24 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/24 15:26:37 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_putnum (int n)
{
	int v;

	if (n >= 10)
		 ft_putnum(n / 10);

	v = (n % 10) + '0';
	ft_putchar(v);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*ft_putnum(*a);
	ft_putchar('\n');
	ft_putnum(*b);

int	main(void)
{
	int a;
	int b;

	a = 55;
	b = 5;

	ft_ultimate_div_mod(&a,&b);
	return (0);
}*/