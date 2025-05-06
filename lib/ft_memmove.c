#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t len) {
  unsigned char *dst = (unsigned char *)dest;
  const unsigned char *sc = (const unsigned char *)src;

  if (!dst && !sc)
    return NULL;

  if (dst < sc) {
    while (len--)
      *dst++ = *sc++;
  } else {
    dst = dst + len - 1;
    sc = sc + len - 1;
    while (len--) {
      *dst-- = *sc--;
    }
  }
  return dest;
}