/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:29 by ekuchel           #+#    #+#             */
/*   Updated: 2023/03/03 16:58:24 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Desc: Allocates (with malloc(3)) and returns a new string, which is
the result of the concatenation of ’s1’ and ’s2’.
Returned:The new string. NULL if the allocation fails.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	ptr = (char *)malloc(len1 + len2 + 1 * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
