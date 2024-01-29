/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madogbey <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:35:33 by madogbey          #+#    #+#             */
/*   Updated: 2024/01/25 17:35:36 by madogbey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	num;
	int	signe;

	num = 0;
	signe = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if (!(signe % 2))
		return (num);
	else
		return (-num);
}
/*#include <stdio.h>
int main()
{
	char	*s = "    ----+--+123344885ab567";
	printf("%d\n", ft_atoi(s));
}*/