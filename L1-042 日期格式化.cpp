#include <stdio.h>
int main() {
  char y[10],m[10],d[10], temp[20];
  scanf("%s", &temp);
  m[0] = temp[0];
  m[1] = temp[1];
  d[0] = temp[3];
  d[1] = temp[4];
  y[0] = temp[6];
  y[1] = temp[7];
  y[2] = temp[8];
  y[3] = temp[9];
  m[2] = d[2] = y[4] = '\0';
  printf("%s-%s-%s\n", y, m, d);
}
