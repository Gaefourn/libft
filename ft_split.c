/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:43:39 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/10 01:43:42 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			ft_l(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int			ft_kontmo(char const *s, char c)
{
	int	i;
	int j;
	int words;

	i = 0;
	words = 1;
	while (s[i])
	{
		j = 0;
		while (s[i] != c && s[i])
		{
			i++;
			j = 1;
		}
		if (j != 0)
			words++;
		i++;
	}
	return (words);
}

char				**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**xd;

	if (!(xd = malloc(sizeof(char*) * (ft_kontmo(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			if (!(xd[j] = malloc(sizeof(char) * (ft_l(s + i, c) + 1))))
				return (NULL);
			while (s[i] != c && s[i])
				xd[j][k++] = s[i++];
			xd[j++][k] = '\0';
		}
	}
	xd[j] = 0;
	return (xd);
}
