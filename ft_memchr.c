/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moajili <moajili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:46:44 by moajili           #+#    #+#             */
/*   Updated: 2023/11/03 14:33:21 by moajili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (*(char *)memoryBlock == (char)searchedChar)
			return ((void *)memoryBlock);
		memoryBlock++;
		i++;
	}
	return (NULL);
}
