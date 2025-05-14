/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:28:01 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:28:01 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_sub(size_t copy_len, unsigned int start,
	char *new_str, char const *s)
{
	size_t	i;

	i = 0;
	while (copy_len > i)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		copy_len;
	size_t		s_len;
	char		*new_str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		new_str = malloc(1);
		if (!new_str)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	copy_len = s_len - start;
	if (len < copy_len)
		copy_len = len;
	new_str = malloc(copy_len + 1);
	if (!new_str)
		return (NULL);
	return (ft_sub(copy_len, start, new_str, s));
}
