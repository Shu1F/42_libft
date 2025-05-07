#include <stddef.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
  size_t i = 0;
  size_t j;

  if (*needle == '\0')
    return (char *)haystack;

  while (i < len && haystack[i] != '\0') {
    if (haystack[i] == needle[0]) {
      j = 0;
      while (haystack[i + j] != '\0' && needle[j] != '\0' && len > i + j &&
             needle[j] == haystack[i + j]) {
        j++;
        if (needle[j] == '\0')
          return (char *)haystack + i;
      }
    }
    i++;
  }
  return NULL;
}

int main(void) {
  char str[] = "42Tokyo";
  char str1[] = "Tok";

  printf("%s", ft_strnstr(str, str1, 7));
  return 0;
}