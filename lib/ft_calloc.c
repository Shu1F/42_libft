#include <stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size) {
  void *str;
  if (count == 0 || size == 0)
    return malloc(1);

  str = malloc(count * size);
  if (!str)
    return NULL;
  ft_bzero(str, count * size);
  return str;
}
