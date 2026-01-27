/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:17:37 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/24 14:57:50 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_prt_num(int n)
{
	char v;

	if (n >= 10)
		ft_prt_num(n / 10);
	v = (n % 10) + '0';
	
	ft_putchar(v);

}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
	/*ft_prt_num(*div);
	ft_prt_num(*mod);


int	main(void)
{
	int div;
	int mod;
	
	ft_div_mod(6, 3, &div, &mod);
	return (0);
}*/