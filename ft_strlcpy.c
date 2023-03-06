/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:52:05 by ekuchel           #+#    #+#             */
/*   Updated: 2023/03/03 16:41:22 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Desc: copies up to dstsize - 1 characters from the string src to
dst, NUL-terminating the result if dstsize is not 0.
Return:return the total length of the string they tried to create.
For strlcpy() that means the length of src.*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while ((i + 1 < dstsize) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
