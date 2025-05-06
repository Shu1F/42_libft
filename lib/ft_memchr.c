#include <stdio.h>

void *ft_memchr(const void *s, int chr, size_t len) {
  const unsigned char *str = (const unsigned char *)s;
  size_t i = 0;

  while (len > i) {
    if (str[i] == (unsigned char)chr)
      return (void *)(str + i);
    i++;
  }
  return NULL;
}

int main(void) {
  char str[] = "42Tokyo";
  char chr = 'o';
  printf("%s", ft_memchr(str, chr, 5));
}