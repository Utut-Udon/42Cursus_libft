/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 04:50:26 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/17 05:40:50 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	mem_buf;

	mem_buf = size * count;
	mem = (void *)malloc(mem_buf);
	if (!mem)
		return (NULL);
	ft_bzero (mem, mem_buf);
	return (mem);
}
