/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:07:07 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/01 10:45:34 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str <= 31 || *str == 127))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	printf("Resultado: %d", ft_str_is_printable("\n"));
	return (0);
}*/