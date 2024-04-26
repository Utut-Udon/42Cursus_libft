/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:30:44 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/27 06:15:07 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*origin;

	if (!lst || !f || !del)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	if (map == NULL)
		return (NULL);
	origin = map;
	lst = lst->next;
	while (lst)
	{
		map->next = ft_lstnew(f(lst->content));
		if (map->next == NULL)
		{
			ft_lstclear(&origin, del);
			return (NULL);
		}
		map = map->next;
		lst = lst->next;
	}
	map->next = NULL;
	return (origin);
}
