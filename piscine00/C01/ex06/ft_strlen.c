/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:47:13 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/26 18:10:10 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
	
}

void	ft_putnum(int n)
{
	int i;

	if (n >= 10)
		ft_putnum(n / 10);
	i = (n % 10) + '0';
	ft_putchar(i);
}*/

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return c;

}

/*int	main(void)
{
	ft_strlen("oieee");
	return (0);
	int len = ft_strlen("filipe");

}*/