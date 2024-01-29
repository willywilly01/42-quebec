/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madogbey <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:39:12 by madogbey          #+#    #+#             */
/*   Updated: 2024/01/25 14:39:14 by madogbey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	j;

	j = nb;
	if (j < 0)
	{
		ft_putchar('-');
		j = -j;
	}
	if (j >= 10)
	{
		ft_putnbr(j / 10);
	}
	ft_putchar("0123456789"[j % 10]);
}
/*int main(void)
{
    int nb = -2147483648;
    ft_putnbr(nb);
}*/