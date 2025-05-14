/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:20:39 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/14 12:22:18 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*dest_copy;
	const unsigned char	*src_copy;

	dest_copy = (unsigned char *)dest;
	src_copy = (const unsigned char *)src;
	if (dest_copy == src_copy || len == 0)
		return (dest);
	while (len--)
		*dest_copy++ = *src_copy++;
	return (dest);
}
