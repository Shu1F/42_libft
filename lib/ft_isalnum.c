/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:47:57 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/02 15:06:47 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c) {
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

int main(void) {
  int i = 0;
  char str[] = "Tokyo";
  char str2[] = "Tokyo12#";
  //   char str2[] = "42Tokyo";
  while (str2[i] != '\0') {
    if (ft_isalnum(str2[i]))
      printf("%c:True\n", str2[i]);
    else
      printf("%c:False\n", str2[i]);
    i++;
  }
  return 0;
}
