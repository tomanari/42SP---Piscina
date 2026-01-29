/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:07:07 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/29 12:37:24 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str <= 31 || *str == 127))
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	printf("Resultado: %d", ft_str_is_printable("\n"));
	return (0);
}*/