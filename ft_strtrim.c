/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:44:09 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/09 22:36:28 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i] && set[i])
			return (1);
		i++;
	}
	return (-1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int	len;

	while (ft_check(*s1, set) == 1)
		++s1;
	len = ft_strlen(s1);
	while (len && (ft_check(s1[len - 1], set) == 1))
		--len;
	if (len == 0)
		return (ft_strdup("\0"));
	return (ft_substr(s1, 0, len));
}
