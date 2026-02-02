/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:03:09 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/02 14:22:35 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
		if(i == nb)
			break;
	}
	while (src[j] != '\0')
	{
		if(i == nb)
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char dest[] = "vSTCV";
	char scr[] = "vSDCe";

	printf("Comp: %s", ft_strncat(dest,scr, 7));
	return 0;
}