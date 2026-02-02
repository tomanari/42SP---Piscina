/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:22:51 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/01 15:04:41 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 3){
		printf("Resultado: %d", ft_strcmp(argv[1],argv[2]));}
	return 0;
}*/