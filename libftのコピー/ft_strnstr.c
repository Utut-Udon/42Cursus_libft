/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:59:59 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/16 21:01:27 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c_hay;

	c_hay = (char *)haystack;
	if (needle == NULL || *needle == '\0')
		return (c_hay);
	i = 0;
	while (*haystack && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len
			&& needle[j] && c_hay[i + j])
			j++;
		if (needle[j] == '\0')
			return (c_hay + i);
		i++;
	}
	return (NULL);
}
