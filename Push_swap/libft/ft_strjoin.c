/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:10:19 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/04 09:11:16 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*join(char *s1, char *s2, int len)
{
	char	*p;
	int		i;
	int		n;

	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n])
	{
		p[i++] = s2[n];
		n++;
	}
	p[i] = '\0';
	return (free(s1), p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int	len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	return (join(s1, s2, len));
}
