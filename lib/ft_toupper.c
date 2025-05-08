/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:28:12 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:28:12 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c) {
  if (c >= 'a' && c <= 'z')
    return c - 32;
  return c;
}

int main(void) {
  int i = 0;
  char str[] = "Tokyo";
  //   char str2[] = "42Tokyo";
  while (str[i] != '\0') {
    printf("%c", ft_toupper(str[i]));
    i++;
  }
  return 0;
}
