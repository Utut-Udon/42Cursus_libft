/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:07:27 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 06:30:04 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	dest_len;

	i = -1;
	dest_len = ft_strlen(dest);
	while (src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = 0;
	return (dest);
}
