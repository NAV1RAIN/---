#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    char name[10];
    int hx, mb;
    scanf("%s %d %d", &name, &hx, &mb);
    if((hx < 15 || hx > 20) || (mb < 50 || mb > 70)) printf("%s\n", name);
  }
  return 0;
}
