/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:27:33 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:27:33 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str) {
  size_t length = 0;
  while (str[length])
    length++;
  return length;
}

int main(void) {
  char str[] = "Tokyo";
  printf("%d", ft_strlen(str));
  return 0;
}
