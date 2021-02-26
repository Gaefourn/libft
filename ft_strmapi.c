/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:55:29 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/10 02:36:43 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (i + 1))) || !s)
		return (NULL);
	str[i] = '\0';
	while (i--)
		str[i] = f(i, (char)*(s + i));
	return (str);
}
