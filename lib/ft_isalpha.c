/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:30 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:26:30 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalpha(int c) {
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int main(void) {
  int i = 0;
  char str[] = "Tokyo";
  //   char str2[] = "42Tokyo";
  while (str[i] != '\0') {
    if (ft_isalpha(str[i]))
      printf("%c:True\n", str[i]);
    else
      printf("%c:False\n", str[i]);
    i++;
  }
  return 0;
}
