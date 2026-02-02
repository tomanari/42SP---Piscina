/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:50:28 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/01 15:00:21 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i ++;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	char str[] = {"SDFWERF"};
	ft_strlowcase(str);
	printf("Conversao: %s", str);
	return (0);
}*/