#include <stdio.h>
#include <string.h>

int main() {
  char str[30] = "I Love GPLT";
  int len = strlen(str);
  for(int i = 0; i < len; i++) {
    printf("%c\n", str[i]);
  }
  return 0;
}
