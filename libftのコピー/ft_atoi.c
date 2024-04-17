/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfujita <hfujita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:11:40 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/17 23:37:54 by hfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return ( c == '\v' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\f' || c == ' ');
}

static int	get_numlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i++] == '0');
	while ('0' <= str[i] && str[i] <= '9')
		len++;
	if (len == 0)
		len++;
	return (len);
}

static int	check_of(long long num, int sign, char *str)
{
	if (num > LLONG_MAX / 10 && sign == -1)
		return (0);
	else if (num > LLONG_MAX / 10 && sign == 1)
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	num;
	int					i;

	i = 0;
	while (is_space(str[i++]));
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str [i]== '-')
			sign *= -1;
		i++;
	}
	num = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10 + (str[i++] - '0');
		if (check_of(num, sign, str) != 1)
			return (check_of(num ,sign, str));
	}
	return (num * sign);
}
