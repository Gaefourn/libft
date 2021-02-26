/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:31:49 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/09 12:15:15 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = -1;
	str = (char*)s;
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (c == 0)
		return (str + i);
	if (j >= 0)
		return (str + j);
	return (NULL);
}
