/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beli <beli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 02:50:43 by beli              #+#    #+#             */
/*   Updated: 2024/05/29 03:50:46 by beli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t count;

    count = 0;
    
    while (((s1[count]) != '\0' || (s2[count]) != '\0') && (count < n))
    {
        if (s1[count] != s2[count])
		{
			return ((unsigned char) s1[count] - (unsigned char) s2[count]);/*casteamos para poder tener en cuenta valores negativos*/
		}
		count++; /*no le suma la posición¿?¿*/
    }
	return (0);
}

int	main(void)
{
	char f[] = "hola";
	char d[] = "adiós";
	size_t t = 4;

	int result = ft_strncmp(f, d, t);
	printf("%d", result);
	return(0);
}