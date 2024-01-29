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

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int main(void)
{
	int nb = 6;
	int pw = 10;
	printf("%d expo %d est = %d\n", nb, pw, ft_iterative_power(nb, pw));
}*/