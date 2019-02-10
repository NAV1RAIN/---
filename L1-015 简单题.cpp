#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char mark;
    scanf("%d %c", &n, &mark);
    int r = n/2.0+0.5;
    for(int i = 0; i < r; i++) {
        for(int i = 0; i < n; i++) {
            printf("%c", mark);
        }
        printf("\n");
    }
    return 0;
}
