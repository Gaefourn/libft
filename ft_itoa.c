/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaefourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:36:36 by gaefourn          #+#    #+#             */
/*   Updated: 2019/10/18 11:38:00 by gaefourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_size(int n)
{
	int size;

	size = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char		*ft_recur(char *str, int n, int i)
{
	if (n < 0)
	{
		n = n * -1;
		str[ft_size(n)] = '-';
	}
	if (n >= 10)
	{
		ft_recur(str, n / 10, i + 1);
		ft_recur(str, n % 10, i);
	}
	else
		str[i] = n + 48;
	return (str);
}

static	void	ft_strrev(char *str)
{
	int	len;
	int	i;
	int	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
}

char			*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = malloc(sizeof(char) * (ft_size(n) + 1))))
		return (NULL);
	str = ft_recur(str, n, 0);
	str[ft_size(n)] = '\0';
	ft_strrev(str);
	return (str);
}
