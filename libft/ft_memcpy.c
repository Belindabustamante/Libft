/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbustama <bbustama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:10:04 by bbustama          #+#    #+#             */
/*   Updated: 2024/05/09 17:35:55 by bbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *__restrict src, size_t n)
{
	size_t	count;

	count = 0;
	if (!dst && !src)
	{
		return (0);
	}
	while (count < n)
	{
		((char *)dst)[count] = ((char *)src)[count];
		count++;
	}
	return (dst);
}
