/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:56:18 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/02 16:46:01 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;

	while (dest[j] != '\0' && j < size)
	{
		j++;
	}
	while (src[i] != '\0' && j + i < size)
	{
			dest[j] = src[i];
			i++;
			j++;
	}
	if (j < size)
	{
		dest[j + i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (j + i);
}

#include <stdio.h>

int main(void)
{
	char dest[] = "vSTCV";
	char scr[] = "vSDCe";

	printf("Comp: %d", ft_strlcat(dest,scr, 8));
	return 0;
}
