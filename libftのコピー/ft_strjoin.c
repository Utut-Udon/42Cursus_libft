/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 06:26:37 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/21 04:24:43 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	dst = malloc(len_1 + len_2 + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, len_1 + 1);
	ft_strlcat(dst, s2, len_1 + len_2 + 1);
	return (dst);
}
