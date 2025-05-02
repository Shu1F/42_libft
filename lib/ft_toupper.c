#include <stdio.h>
#include <unistd.h>

int ft_toupper(int c) {
  if (c >= 'a' && c <= 'z')
    return c - 32;
  return c;
}

int main(void) {
  int i = 0;
  char str[] = "Tokyo";
  //   char str2[] = "42Tokyo";
  while (str[i] != '\0') {
    printf("%c", ft_toupper(str[i]));
    i++;
  }
  return 0;
}