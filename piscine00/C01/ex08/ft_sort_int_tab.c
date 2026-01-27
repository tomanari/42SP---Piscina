/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:14:50 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/25 15:42:43 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int temp;

	c = 0;
	while (c < size - 1)
	{
		if (tab[c] > tab[c+1])
		{
			temp = tab[c];
			tab[c] = tab[c+1];
			tab[c+1] = temp;
			c = 0;
		}
		else
			c++;
	}
}

int main(void)
{
	int arr[5] = {5, 1, 6, 3, 2};
	int i = 0;
	
	ft_sort_int_tab(arr, 5);
	while (i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}