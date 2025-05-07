#include <stddef.h>
#include <stdlib.h>

int ft_strlen(const char *str) {
  int length = 0;
  while (*str != '\0') {
    length++;
    str++;
  }
  return length;
}

char *strdup(const char *str) {
  size_t len = ft_strlen(str);
  char *str_copy = malloc(len + 1);
  size_t i;

  if (!str_copy)
    return NULL;

  while (len > i) {
    str_copy[i] = str[i];
    i++;
  }
  str_copy[i] = '\0';

  return str_copy;
}