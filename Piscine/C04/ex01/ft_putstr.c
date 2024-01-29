/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madogbey <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:22:06 by madogbey          #+#    #+#             */
/*   Updated: 2024/01/25 14:22:12 by madogbey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
/*#include <unistd.h>
int main(void)
{
	char chaine[] = "Salut, je dois m'afficher";
	ft_putstr(chaine);
}*/
