/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 18:20:01 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/26 17:58:16 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write (1, &x, 1);
}	
void ft_putnum(int n)
{
	if (n >= 10)
		ft_putnum(n / 10);
	n = (n % 10) + '0';
	ft_putchar(n);	
}

int	ft_swap(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int c;

	c = 0;
	while (c < size / 2)
	{
		 ft_swap(&tab[c], &tab[size - c -1]);
		 c++;
	}
}
int main(void)
{
	int i;
	int arr[6] = {1,2,3,4,5,6};
	

	ft_rev_int_tab(arr, 6);

	while (i < 6)
	{
		ft_putnum(arr[i]);
		i++;
	}
	
	
	return (0);
}

