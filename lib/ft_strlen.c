#include <stddef.h>
#include <stdio.h>

size_t ft_strlen(const char *str) {
  size_t length = 0;
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