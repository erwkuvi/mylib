/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:51:32 by ekuchel           #+#    #+#             */
/*   Updated: 2023/03/03 17:02:41 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Desc:Outputs the character ’c’ to the given file descriptor.*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
