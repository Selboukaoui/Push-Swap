/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 09:32:49 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/04 09:05:37 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*reading(int fd, char *buffer, ssize_t *counter)
{
	*counter = read(fd, buffer, BUFFER_SIZE);
	if (*counter == -1)
	{
		free (buffer);
		buffer = NULL;
	}
	else
		buffer[*counter] = '\0';
	return (buffer);
}

char	*outline(char *saveline)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (saveline[j] == '\0')
		return (NULL);
	while (saveline[i] != '\0' && saveline[i] != '\n')
		i++;
	if (saveline[i] == '\n')
		i++;
	str = malloc (i + 1);
	if (!str)
		return (NULL);
	while (saveline[j] && saveline[j] != '\n')
	{
		str[j] = saveline[j];
		j++;
	}
	if (saveline[j] == '\n')
		str[j++] = '\n';
	str[j] = '\0';
	return (str);
}

char	*cleaning(char *saveline)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (saveline[j] && saveline[j] != '\n' )
		j++;
	if (saveline[j] == '\0')
		return (free(saveline), NULL);
	if (saveline[j] == '\n')
		j++;
	str = malloc (sizeof(char) * (len(saveline) - j + 1));
	if (!str)
		return (NULL);
	while (saveline[j])
		str[i++] = saveline[j++];
	str[i] = '\0';
	free(saveline);
	return (str);
}

char	*looping(char *saveline, int fd)
{
	ssize_t			counter;
	char			*tmp;
	char			*buffer;

	counter = 0;
	buffer = malloc ((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (1)
	{
		buffer = reading(fd, buffer, &counter);
		if (counter == -1)
			return (free(buffer), free(saveline), NULL);
		tmp = saveline;
		saveline = joining(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (!saveline)
			return (NULL);
		if (search(saveline, '\n') || counter == 0)
		{
			return (free(buffer), buffer = NULL, saveline);
		}
	}
	return (free(buffer), buffer = NULL, saveline);
}

char	*get_next_line(int fd)
{
	static char		*saveline;
	char			*output;

	if (fd < 0 || fd >= OPEN_MAX)
		return (NULL);
	if (read(fd, 0, 0) < 0 || BUFFER_SIZE > INT_MAX || BUFFER_SIZE <= 0)
		return (free(saveline), saveline = NULL, NULL);
	saveline = looping(saveline, fd);
	if (!saveline)
		return (free(saveline), NULL);
	output = outline(saveline);
	saveline = cleaning(saveline);
	return (output);
}
