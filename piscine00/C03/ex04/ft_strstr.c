/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:39:24 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/02 13:51:07 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
			while (to_find[j] != '\0' && str[i] == to_find[j])
			{
				j++;
				i++;
			}
		i++;
		if(to_find[j] == '\0')
		return (&str[i - j]);
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char str[] = "oi emily tudo bem?";
	char tofind[] = "tudo";

	printf("Comp: %s", ft_strstr(str,tofind));
	return 0;
}