/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madogbey <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:38:38 by madogbey          #+#    #+#             */
/*   Updated: 2024/01/28 15:38:43 by madogbey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int main(void)
{
	int nb = 6;
	int pw = 10;
	printf("%d expo %d est = %d\n", nb, pw, ft_recursive_power(nb, pw));
}*/