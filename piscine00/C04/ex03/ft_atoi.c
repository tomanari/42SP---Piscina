/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:07:15 by mtomanar          #+#    #+#             */
/*   Updated: 2026/02/04 17:34:24 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void  ft_putchar(char c)
// {
//   write(1, &c, 1);
// }

// void  ft_putnbr(int nb)
// {
//   long int  n;

//   n = nb;
//   if (n < 0)
//     ft_putchar('-');
//     n *= -1;
//   while (n > 9)
//     ft_putnbr(n / 10);
//   n = n % 10 + '0';
//   ft_putchar(n);
// }

int  ft_atoi(char *str)
{
  int  res;
  int  sign;

  sign = 1;
  res = 0;
  while (*str == ' ' || (*str >= 9 && *str <= 13))
  {  
    str++;
  }
  while(*str == '-' || *str == '+')
  {
    if(*str == '-')
      sign *= -1;
    str++;
  }
  while (*str >= '0' && *str <= '9')
  { 
    res = res * 10 + (*str - '0');
    str++;
  }
  return (res * sign);
}
