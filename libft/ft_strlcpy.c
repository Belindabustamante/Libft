/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beli <beli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:42:26 by bbustama          #+#    #+#             */
/*   Updated: 2024/05/28 18:13:28 by beli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t n;
	
	n = 5;
	srclen = ft_strlen(src);
	
	ft_memcpy(dst, src, n);
	
	if (dstsize > 0)
	{
		dst = '\0';
	}
	return (srclen);
}

/*int	main(void)
{
	char	f[]= "Hola";
	char	d[]= "Entero";
	size_t = 6;

	ft_strlcpy(f, d);
}*/