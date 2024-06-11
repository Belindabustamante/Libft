/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beli <beli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 02:40:50 by beli              #+#    #+#             */
/*   Updated: 2024/05/29 12:54:30 by beli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int	count;

	count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == (char) c)
		{
			NULL /*??? no lo entiendo*/= (char *)&s[count];
		}
		count++;
	}
	if (c == '\0')
	{
		NULL = (char *)&s[count];
	}
	return (NULL);   
}