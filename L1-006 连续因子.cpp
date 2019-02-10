#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int ss[100];
int main()
{
    unsigned long long n;
    int bj = 0;
    scanf("%llu", &n);
    int gen = sqrt(n);
    int ans = 0;
    for(int i = 2; i <= gen*2; i++) {
        if(n%i == 0) {
            int nt = 0;
            unsigned long long tt = n;
            for(int j = i; j <= gen*2 && tt%j == 0; j++) {
                tt = tt/j;
                nt++;
            }
            if(nt > ans) {
                ans = nt;
                memset(ss, 0, sizeof(ss));
                bj = 0;
                for(int j = i; j < i+nt; j++) {
                    ss[bj++] = j;
                }
            }
        }
    }
    if(bj == 0) {
        printf("1\n%llu\n", n);
    } else {
        printf("%d\n", ans);
        printf("%d", ss[0]);
        for(int i = 1; i < bj; i++) {
            printf("*%d", ss[i]);
        }
        printf("\n");
    }
    return 0;
}
