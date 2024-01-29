/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madogbey <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:11:37 by madogbey          #+#    #+#             */
/*   Updated: 2024/01/29 17:11:41 by madogbey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int result;

    result = 0;
    if (index == 1)
        return (0);
    else if (index == 2)
        return (1);
    else
    {
        result = ft_fiboonacci(index -2) +  ft_fibonacci(index - 1);
        return (result);
    }
}
