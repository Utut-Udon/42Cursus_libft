/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfujita <hfujita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:59:59 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/17 22:28:21 by hfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c_hay;

	if (!haystack && !len)
		return (NULL);
	c_hay = (char *)haystack;
	if (*needle == '\0')
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
