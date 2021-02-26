/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:20:26 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/18 11:44:07 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)src;
	s2 = (char*)dest;
	if (!dest && !src)
		return (NULL);
	i = 0;
	if (src < dest)
		while (n-- > 0)
			s2[n] = s1[n];
	else
		while (i < n)
		{
			s2[i] = s1[i];
			i++;
		}
	return (s2);
}
