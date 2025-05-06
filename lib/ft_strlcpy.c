#include <stddef.h>
#include <stdio.h>

int ft_strlen(const char *str) {
  int length = 0;
  while (*str != '\0') {
    length++;
    str++;
  }
  return length;
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
  int i = 0;
  int src_len = ft_strlen(src);
  if (dstsize == 0)
    return src_len;
  while (dstsize - 1 > i && src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  *dst = '\0';
  return src_len;
}

int main(void) {
  char str[] = "42Tokyo";
  char str1[] = "AAAAAAAAAAAAAAAAAAAAAAA";
  printf("%d\n", ft_strlcpy(str1, str, 3));
}