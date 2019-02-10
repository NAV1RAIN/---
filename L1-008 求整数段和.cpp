#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    int j = 1;
    int sum = 0;
    for(int i = l; i <= r; i++, j++) {
        printf("%5d", i);
        sum += i;
        if(j%5 == 0) printf("\n");
    }
    printf("%s", (j-1)%5 == 0 ? "" : "\n");
    printf("Sum = %d", sum);
    return 0;
}
