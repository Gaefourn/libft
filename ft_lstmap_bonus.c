/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:59:37 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/18 10:57:32 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*tmp;
	t_list	*begin;
	t_list	*libere;

	tmp = f(lst);
	begin = tmp;
	if (!(lst))
		return (NULL);
	while (lst)
	{
		if (lst->next)
			tmp->next = f(lst->next);
		libere = lst;
		tmp = tmp->next;
		lst = lst->next;
		ft_lstdelone(libere, del);
	}
	return (begin);
}
