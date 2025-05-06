#include <stdio.h>

int ft_strlen(const char *str) {
  int length = 0;
  while (*str != '\0') {
    length++;
    str++;
  }
  return length;
}

char *ft_strrchr(const char *str, int find_ch) {
  int str_len = ft_strlen(str);

  while (str_len >= 0) {
    if (str[str_len] == (char)find_ch)
      return (char *)(str + str_len);
    str_len--;
  }
  return NULL;
}
