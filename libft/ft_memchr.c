/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beli <beli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:49:07 by beli              #+#    #+#             */
/*   Updated: 2024/06/11 09:14:10 by beli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    str = (unsigned char *) s;
    uc (unsigned char) c;
    i = 0;
    /*bucle sobre n bytes */
    while (i < n)
    {
        /*misma comprobación que en ft_strchr */
        if (str[i] == uc)
            /* devolvemos puntero void en lugar de puntero char como hicimos en ft_strchr*/
            return ((void *) &str[i]);
        i++;
    }
    /* Si no encontramos ninguna aparación de c en n bytes, devolvemos null*/
    return (NULL);
}
