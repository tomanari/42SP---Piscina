/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:53:07 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/26 20:09:39 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i != n)
	{	
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

int 	main(void)
{
	char x[5];
	char y[] = "ola";

	ft_strncpy(x, y, 2);
	printf("%s",x);
	return (0);
}