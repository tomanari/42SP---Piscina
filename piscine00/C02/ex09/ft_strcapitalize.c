/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:05:02 by mtomanar          #+#    #+#             */
/*   Updated: 2026/01/29 14:15:12 by mtomanar         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	fl;

	ft_strlowcase(str);
	fl = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (fl == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			fl = 1;
		}
		else
		{
			fl = 0;
		}
		i++;
	}
	return (str);
}
/*int main(void)
{
	char str[] = {"hi, how are you? 42words foRty-two; fiftTy+and+one"};
	ft_strcapitalize(str);
	printf("Resposta: %s", str);
	return (0);
}*/