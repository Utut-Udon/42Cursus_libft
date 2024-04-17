/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfujita <hfujita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 03:31:04 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/15 23:17:14 by hfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;
	char	c_c;

	len = ft_strlen(s);
	str = (char *)s;
	c_c = (char)c;
	while (len > 0)
	{
		if (str[len] == c_c)
			return (&str[len]);
		len--;
	}
	if (str[0] == c_c)
		return (str);
	return (NULL);
}
