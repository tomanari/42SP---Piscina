/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:50:28 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/31 11:51:51 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str ++;
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