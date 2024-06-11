/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beli <beli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:10:28 by beli              #+#    #+#             */
/*   Updated: 2024/05/29 02:44:13 by beli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == (char) c)
		{
			return ((char *)&s[count]);/*se retorna un puntero a la posición del carácter encontrado*/
		}
		count++;
	}
	if (c == '\0')
	{
		return ((char *)&s[count]);/*añadimos & porque retorna un puntero al final de la cadena*/
	}
	/*else*/
	return (NULL);
}

/*int	main(void)
{
	char s[] = "Hola";
	int	c = 'a';
	char *result;

	result = ft_strchr(s, c);
	printf("%s", result);
	return (0);
}*/