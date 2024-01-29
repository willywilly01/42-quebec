/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madogbey <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:15:34 by madogbey          #+#    #+#             */
/*   Updated: 2024/01/23 16:15:37 by madogbey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len1;
	unsigned int	len2;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
		i++;
	if (i < size)
	{
	while (j < size - i - 1 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + len2);
	}
	return size + len2;
}
/*#include <string.h>
#include <stdio.h>
int main() {
   char str1[100] = "This is ", str2[] = "42 Québec";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   ft_strcat(str1, str2);

   puts(str1);
   puts(str2);

   return 0;
}*/