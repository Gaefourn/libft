/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:02:57 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/16 11:52:17 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;

	if (!(str = malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	str[len] = '\0';
	if (start > ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	while (len--)
		str[len] = s[start + len];
	return (str);
}
