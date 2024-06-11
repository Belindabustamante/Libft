/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbustama <bbustama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:40:52 by bbustama          #+#    #+#             */
/*   Updated: 2024/05/07 12:26:56 by bbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((!dst && !src) || (dst == src))
	{
		return (dst);
	}
	if (dst > src)
	{
		while (len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	f[] = "Hola";
	char	d[] = "Ajofrito";
	size_t	n = 4;

	ft_memmove(d, f, n);
	printf("%s", d);
	return (0);
}*/
