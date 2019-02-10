#include <stdio.h>
int main() {
  int pa, pb;
  int a, b, c;
  scanf("%d %d", &pa, &pb);
  scanf("%d %d %d", &a, &b, &c);
  if(a == b && b == c) {
    if(a == 0) printf("The winner is a: %d + 3\n", pa);
    else printf("The winner is b: %d + 3\n", pb);
    return 0;
  }
  if(pa < pb) printf("The winner is b: %d + %d\n", pb, a+b+c);
  else printf("The winner is a: %d + %d\n", pa, 3-a-b-c);
  return 0;
}
