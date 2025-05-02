#include <stdio.h>

int ft_isdigit(int c) { return (c >= '1' && c <= '9'); }

int main(void) {
  int i = 0;
  char ary[] = "12345T";
  while (ary[i] != '\0') {
    if (ft_isdigit(ary[i]))
      printf("%c: True\n", ary[i]);
    else
      printf("%c: False", ary[i]);
    i++;
  }
  return 0;
}