/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:56:18 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/04 16:15:40 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l_src;
	unsigned int	l_dest;

	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	if (size <= l_dest)
		return (size + l_src);
	i = l_dest;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l_dest + l_src);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[] = "vSTCV";
// 	char scr[] = "vSDCef";
// 	printf("Comp: %d\n", ft_strlcat(dest,scr, 7));
// 	printf("Comp: %s", dest);
// 	return 0;
// }
