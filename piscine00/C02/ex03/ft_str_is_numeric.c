/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:27:27 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/31 11:49:37 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] <= 9))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char i[] = "48";

	printf("Resultado: %d", ft_str_is_numeric(i));
	return(0);
}*/