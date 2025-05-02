#include <stdio.h>

int ft_strlen(char *str) {
  int length = 0;
  while (*str != '\0') {
    length++;
    str++;
  }
  return length;
}

int main(void) {
  char str[] = "Tokyo";
  printf("%d", ft_strlen(str));
  return 0;
}