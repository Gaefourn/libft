/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:53:02 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/14 15:02:54 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*jaja;
	t_list	*tmp;

	jaja = *lst;
	while (jaja)
	{
		del(jaja->content);
		tmp = jaja->next;
		free(jaja);
		jaja = tmp;
	}
	*lst = NULL;
}
