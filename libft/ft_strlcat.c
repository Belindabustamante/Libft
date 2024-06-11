/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beli <beli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:55:55 by beli              #+#    #+#             */
/*   Updated: 2024/05/29 02:40:27 by beli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	
	srclen = ft_strlen(src);
    dstlen = ft_strlen (dst);

    if(dstlen == dstsize)
    {
		return (dstsize + srclen);
    }
    else if (dstsize > srclen + dstlen)
    {
		ft_memcpy(dst + dstlen, src, srclen + 1); 
	/*
		dst + dstlen:
Este es el destino donde comenzará la copia. 
dstlen es la longitud de la cadena ya existente en dst. 
Así que dst + dstlen apunta al primer byte disponible en dst 
donde la nueva cadena src comenzará a ser copiada (es decir, al final de dstlen).

	src: Es la cadena que queremos concatenar a dst.

	srclen + 1
Este es el número de bytes a copiar desde src hacia dst. Al sumar 1 a srclen, 
se copia un byte adicional para asegurar que se copie un carácter nulo ('\0').*/

	}
    else
    {
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);

/*
		dst + dstlen:
Apunta al primer byte disponible en dst donde src se copiará
(es decir, al final de dstlen).

		dstsize - dstlen - 1:
Este es el número de bytes a copiar desde src a dst. Para entender esto, necesitamos considerar que:
dstsize es el tamaño total del buffer dst.
dstlen es la longitud de la cadena ya existente en dst.
Si no hay suficiente espacio (dstsize), copiamos solo lo que cabe (dstlen), 
dejando espacio para un solo carácter nulo al final (-1).*/


		dst[dstsize - 1] = '\0';/*terminamos la cadena en NULL*/
    }
    return(srclen + dstlen);
}
