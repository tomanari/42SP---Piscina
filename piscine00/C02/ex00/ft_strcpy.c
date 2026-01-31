/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:08:19 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/31 11:49:17 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/*#include <stdio.h>

int 	main(void)
{
	char x[5];
	char y[] = "ola";

	ft_strcpy(x, y);
	printf("%s",x);
	return (0);
}*/
