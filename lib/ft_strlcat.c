#include <stddef.h>

int ft_strlen(const char *str) {
  int length = 0;
  while (*str != '\0') {
    length++;
    str++;
  }
  return length;
}

size_t strlcat(char *dst, const char *src, size_t dstsize) {
  int src_len = 0;
  int dst_len = 0;
  int i = 0;
  int dst_rest;
  src_len = ft_strlen(src);
  dst_len = ft_strlen(dst);
  if (dst_len >= dstsize)
    return dstsize + src_len;

  dst_rest = dstsize - dst_len - 1;

  while (dst_rest > i && src[i] != '\0') {
    dst[dst_len + i] = src[i];
    i++;
  }
  dst[dst_len + i] = '\0';
  return dst_len + src_len;
}