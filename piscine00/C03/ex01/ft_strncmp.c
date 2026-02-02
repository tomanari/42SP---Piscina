/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:02:10 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/01 15:08:07 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	res;
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (i < n))
	{
		i++;
	}
	return (res = s1[i] - s2[i]);
}

/*#include <stdio.h>

int main(void)
{
	printf("Comp: %d", ft_strncmp("vSTCV","vSDCe", 3));
	return 0;
}*/