/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:50:59 by rfleritt          #+#    #+#             */
/*   Updated: 2024/10/20 18:27:06 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	ns;

	i = 0;
	ns = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * (ns + 1));
	if (!ptr || !s1 || !s2)
		return (NULL);
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[ns] = '\0';
	return (ptr);
}

void	*ft_calloc(size_t num, size_t size)
{
	char	*ptr;
	size_t	ns;
	size_t	i;

	i = 0;
	if (num != 0 && size >= SIZE_MAX / num)
		return (NULL);
	ns = num * size;
	ptr = (char *)malloc(ns);
	if (ptr == NULL)
		return (NULL);
	while (i < ns)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
